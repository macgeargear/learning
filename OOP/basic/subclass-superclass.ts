// import { TimedLogger, Logger } from './extends'
// TimedLogger extends Logger
// Logger is Superclass of TimedLogger
// TimedLogger is Subclass of Logger

function iUserTimeLogger(log: TimedLogger) {
    log.appendLog('This log have a timestamp')
    log.flush()
    log.logColor('This is a colorful log')
}

function iUserJustALogger(log: Logger) {
    log.appendLog(`This log should be raw, shoulnd't it?`)
    log.flush()
}