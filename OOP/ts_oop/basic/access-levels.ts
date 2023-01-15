// Access level

// Public: any one can access
//Private: can access in own class
//Protected: can access in own class and sub class

class A {
    protected data = 'My data'
    public hello() {
        console.log(this.data)
    }

    public greetingMessage() {
        return 'Hello world'
    }
}

class B extends A {
    method() {
        this.data
    }
}

const object = new A()
const object2 = new B()
