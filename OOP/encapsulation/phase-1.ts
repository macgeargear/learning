export enum Suits {
    Spade,
    Diamond,
    Heart,
    Club,
}

export enum ComparisonResult {
    Win,
    Lose,
    Draw,
}

export enum Rank {
    Nothing = 0,
    OnePair = 1,
    TwoPairs = 2,
    ThreeOfAKind = 3,
    Straight = 4,
    Flush = 5,
    FullHouse = 6,
    FourOfAKind = 7,
    StraightFlush = 8,
}

type HandPower = {
    rank: Rank
    highs: number[]
}


class Card {
    number: number
    suits: Suits

    constructor(number: number, suits: Suits) {
        this.number = number
        this.suits = suits
    }
}


export class Hand {
    private cards: Card[]

    constructor(cards: Card[]) {
        this.cards = cards
    }

    private power(): HandPower {
        throw Error('Not implemented')
    }

    public compareWith(anotherHand: Hand): ComparisonResult {

        const { rank } = this.power()
        const anotherHandPower = anotherHand.power()
        const anotherRank = anotherHandPower.rank

        if (rank > anotherRank) {
            return ComparisonResult.Win
        }

        if (rank < anotherRank) {
            return ComparisonResult.Lose
        }
        
        return this.CompareHighs(anotherHandPower.highs)
    }

    private CompareHighs(anotherHighs: number[]): ComparisonResult {
        const { highs } = this.power()
        for (let i=0; i<highs.length; i++) {
            if (highs[i] > anotherHighs[i]) {
                return ComparisonResult.Win
            } else {
                return ComparisonResult.Lose
            }
        }
        return ComparisonResult.Draw
    }
}

// Usage 

const straightFlushCard = [
    new Card(14, Suits.Club),
    new Card(13, Suits.Club),
    new Card(12, Suits.Club),
    new Card(10, Suits.Club),
    new Card(11, Suits.Club),
]

const onePairCards = [
    new Card(10, Suits.Club),
    new Card(10, Suits.Diamond),
    new Card(14, Suits.Club),
    new Card(12, Suits.Club),
    new Card(11, Suits.Club),
]

const straightFlushHand = new Hand(straightFlushCard)
const onePairHand = new Hand(onePairCards)
const result = straightFlushHand.compareWith(onePairHand)
console.log(result)

