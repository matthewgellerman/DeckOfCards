//implementation for Deck, Card Classes

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "Deck.h"
using namespace Gel;
using namespace std;

static Card CreateCard() {
    Card card;
    vector<string> powerlvls = {
        "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King", "Ace"
    };//The possible powerlevels of the cards

    vector<string> suits = {
        "Hearts", "Spades", "Clubs", "Diamonds"
    };//The possible suits of the cards

    random_device rdx;
    default_random_engine engx(rdx());
    uniform_int_distribution<int> distrx(0, 11);
    int x = distrx(engx);  // generates the indexnumber for the cardpower

    random_device rdy;
    default_random_engine engy(rdy());
    uniform_int_distribution<int> distry(0, 3);
    int y = distry(engy); //generates the indexnumber for cardsuit

    card.powerlvl = powerlvls[x];
    card.suit = suits[y];

    std::cout << "Card Drawn: " << card.powerlvl << " of " << card.suit;

    return card;

}