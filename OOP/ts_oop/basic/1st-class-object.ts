class Greeting {
    // Properties
    name = 'Chirs'

    constructor(initialName: string) {
        this.name = initialName
    }

    // Method
    greetingMessage(): void {
        console.log(`Hello, ${this.name}`)
    }

    changeNameToCelebrity(newName: string) {
        this.name = newName
    }
}

class Main {
    public run() {
        const g1 = new Greeting("RealUser")
        g1.greetingMessage()
        g1.changeNameToCelebrity('Mark Zuckerberg')
        g1.greetingMessage()
        console.log("----------")
        const g2 = new Greeting("Gear")
        g2.greetingMessage()
        g2.changeNameToCelebrity('GeeksForGeeks')
        g2.greetingMessage()
    }
}

new Main().run()