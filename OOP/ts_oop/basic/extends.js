var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
// สมมติว่าเรามี class
var Logger = /** @class */ (function () {
    function Logger() {
        this.logBuffer = [];
    }
    Logger.prototype.appendLog = function (msg) {
        this.logBuffer.push(msg);
    };
    Logger.prototype.flush = function () {
        for (var _i = 0, _a = this.logBuffer; _i < _a.length; _i++) {
            var msg = _a[_i];
            console.log(msg);
        }
        this.logBuffer = [];
    };
    return Logger;
}());
var logger = new Logger();
logger.appendLog("Hello World");
logger.flush();
var TimedLogger = /** @class */ (function (_super) {
    __extends(TimedLogger, _super);
    function TimedLogger() {
        return _super !== null && _super.apply(this, arguments) || this;
    }
    TimedLogger.prototype.appendLog = function (msg) {
        this.logBuffer.push("".concat(new Date().toISOString(), ": ").concat(msg));
    };
    TimedLogger.prototype.logColor = function (msg) {
        console.log('\x1b[36m%s\x1b[0m', msg);
    };
    return TimedLogger;
}(Logger));
var timeLogger = new TimedLogger();
timeLogger.appendLog("Hello world");
timeLogger.appendLog("Nice to meet you");
timeLogger.flush();
timeLogger.logColor('Colorful log');
