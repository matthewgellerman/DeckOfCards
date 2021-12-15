/*This is Matt Gellerman's first attempt at a program
that will simulate a deck of cards*/

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <random>


class Card {
public:
    std::string powerlvl;
    std::string suit;

    Card createCard(); //interface fuction that creates a 'Card' object

};

Card createcard() {
    Card card;
    std::vector<std::string> powerlvls = {
        "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King", "Ace"
    };//The possible powerlevels of the cards

    std::vector<std::string> suits = {
        "Hearts", "Spades", "Clubs", "Diamonds"
    };//The possible suits of the cards

    std::random_device rdx;
    std::default_random_engine engx(rdx());
    std::uniform_int_distribution<int> distrx(0, 11);
    int x = distrx(engx);  // generates the indexnumber for the cardpower

    std::random_device rdy;
    std::default_random_engine engy(rdy());
    std::uniform_int_distribution<int> distry(0, 3);
    int y = distry(engy); //generates the indexnumber for cardsuit

    card.powerlvl = powerlvls[x];
    card.suit = suits[y];

    std::cout << "Card Drawn: " << card.powerlvl << " of " << card.suit;

    return card;

}


int main()
{
    Card card1;

    card1 = createcard();//call function

    return 0;
}
//Next job: create class Deck as a container of Card objects

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
