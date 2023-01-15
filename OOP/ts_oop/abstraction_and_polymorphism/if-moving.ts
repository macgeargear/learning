function doThis() {
    console.log('doThis')
}

function doThat() {
    console.log('doThat')
}

function doStuff(a: number, b: number) {
    const runner = DoFactory(a,b)
    runner.run()
        
}

/* -------------------------------------------------------------------------- */
/*                         rewrite to factory, polymorphism pattern                         */
/* -------------------------------------------------------------------------- */
interface Run {
    run(): void
}

class DoThisRunner implements Run {
   run(): void {
       console.log('doThis')
   } 
}

class DoThatRunner implements Run {
   run(): void {
       console.log('doThat')
   } 
}

function DoFactory (a: number, b: number) {
    if (a > b) return new DoThisRunner()
    return new DoThatRunner()
}


// factory pattern means to move if statement into the right place that makes it easier to edit