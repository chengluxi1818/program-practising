/*
 * DeckandCard.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include "DeckandCard.h"

DeckandCard::DeckandCard() {
	// TODO Auto-generated constructor stub

}

DeckandCard::~DeckandCard() {
	// TODO Auto-generated destructor stub
}

int doit(){
    Deck deck;
    deck.shuffle();
    vector<Card> vc = deck.deal_hand(5);
    cout<<deck.remain_cards()<<endl;
    for(int i=0; i<vc.size(); ++i)
        cout<<vc[i].value()<<" "<<(Suit)vc[i].suit()<<endl;
    return 0;
}
