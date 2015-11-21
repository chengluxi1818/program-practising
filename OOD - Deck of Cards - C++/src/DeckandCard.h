/*
 * DeckandCard.h
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <vector>
#include <cstdlib>
#include <algorithm>
#include <time.h>
using namespace std;

#ifndef DECKANDCARD_H_
#define DECKANDCARD_H_

class DeckandCard {
public:
	DeckandCard();
	virtual ~DeckandCard();
};


enum Suit {
    Spade, Heart, Club, Diamond
};

class Card {
 private:
    int v;
    Suit s;
    bool available;
 public:
    Card(){
        available = true;
    }
    Card(int val, Suit su){
        v = val;
        s = su;
        available = true;
    }
    int value(){
        return v;
    }
    Suit suit(){
        return s;
    }
    bool is_available(){
        return available;
    }
    void mark_unavailable(){
        available = false;
    }
    void mark_available(){
        available = true;
    }
};

class Deck {
 private:
    vector<Card> deck;
    int used;
 public:
    Deck(){
        for(int i=1; i<=13; ++i)
            for(int j=0; j<4; ++j)
                deck.push_back(Card(i, (Suit)j));
        used = 0;
    }
    Deck(vector<Card> c){
        deck.assign(c.begin(), c.end());
        used = 0;
    }
    void shuffle(){
        srand((unsigned)time(NULL));	// initialization of random number generator, for distinct group of random number: use time(NULL);
        for(int i=0; i<deck.size(); ++i){
            int j = rand()%(deck.size()-i) + i;
            Card t = deck[i];
            deck[i] = deck[j];
            deck[j] = t;
        }
    }

/*    void Shuffle() {
        int bagSize = 4 * 13;
        int index = 0;
        srand(time(NULL));
        while (bagSize) {
            index = rand() % bagSize;
            swap(cards[--bagSize], cards[index]);
        }
    }*/

    int remain_cards(){
        return deck.size() - used;
    }
    Card deal_card(){
        //if(remain_cards() == 0) return null;
        Card c = deck[used];
        deck[used].mark_unavailable();
        ++used;
        return c;
    }
    vector<Card> deal_hand(int num){
        vector<Card> hand;
        if(remain_cards() < num) return hand;
        while(num-- > 0)
            hand.push_back(deal_card());
        return hand;
    }
};


#endif /* DECKANDCARD_H_ */
