//Deck.h
//Interface for Deck, Card classes
#pragma once

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
namespace Gel //Matt Gellerman's namespace for his header source code

{
    class Card
    {
    public:
        std::string powerlvl;
        std::string suit;
        Card CreateCard(); //interface fuction that creates a 'Card' object
    };

    //Creates a Deck which is going to be a vector of all 52 card combinations
    //This has to be dynamic as I need to be able shuffle cards, discard, sort card


}