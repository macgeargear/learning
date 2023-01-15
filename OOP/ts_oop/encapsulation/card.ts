export enum Suits {
    Spade,
    Diamond,
    Heart,
    Club,
}

export class Card {
    constructor(public nubmer: number, public suits:Suits) {}
}