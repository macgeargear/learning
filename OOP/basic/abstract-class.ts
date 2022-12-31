// cannot create class from abstract but can extend!
abstract class AbstractDocument {
    public View() {
        console.log('Document Viewd')
    }

    // must implement this method when inherit
    abstract Print(): void
}

class Invoice extends AbstractDocument {
    Print() {
        console.log('Invoice printed')
    }
}

class Receipt extends AbstractDocument {
    Print() {
        console.log('Receipt printed')
    }
}

const myDoc = new Invoice()
// myDoc.View()
const myDoc2 = new Receipt()


function myFunc(doc: AbstractDocument) {
    doc.View()
    doc.Print()
}

myFunc(myDoc)
console.log('----')
myFunc(new Receipt())

