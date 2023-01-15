var Greeting = /** @class */ (function () {
    function Greeting() {
        // Properties
        this.name = 'Chirs';
    }
    // Method
    Greeting.prototype.greetingMessage = function () {
        console.log("Hello, ".concat(this.name));
    };
    Greeting.prototype.changeNameToCelebrity = function (newName) {
        this.name = newName;
    };
    return Greeting;
}());
var Main = /** @class */ (function () {
    function Main() {
    }
    Main.prototype.run = function () {
        var g1 = new Greeting();
        g1.greetingMessage();
    };
    return Main;
}());
new Main().run();
