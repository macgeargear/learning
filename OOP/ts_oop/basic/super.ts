class Cal {
    protected a: number
    protected b: number

    constructor(a: number, b: number) {
        this.a = a
        this.b = b
    }

    calculate(): number {
        return this.a * this.b
    }
}

class FormulaAndLog extends Cal {
    calculate(): number {
        console.log('Calculating this special formula')
        return super.calculate()
    }
}

const f = new FormulaAndLog(1,2)
console.log(f.calculate())