interface Approvable {
    Approve(approveName: string): void
}

interface Printable {
    Print(): void
}

function confirm(doc: Approvable) {
    doc.Approve('Chris')
}

class Receipt implements Approvable, Printable {
    Print(): void {
        console.log('Receipt printed')
    }
    Approve(approveName: string): void {
        console.log(`Receipt Approve ${approveName}`)
    }
}

class Invoice implements Approvable {
    Approve(approveName: string): void {
        console.log(`Invoice Approve ${approveName}`)
    }
}

confirm(new Receipt())
confirm(new Invoice())