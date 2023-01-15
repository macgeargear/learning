class StringUtils {
    static StaticMethod(str: string[]) {
        console.log('Static method called', str.join(', '))
    }

    NormalMethod() {
        console.log('Mthod called')
    }
}

StringUtils.StaticMethod(['It\'s me', 'Hi', 'I\'m the problem'])
const obj2 = new StringUtils()
obj2.NormalMethod()