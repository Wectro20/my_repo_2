#include <iostream>
#include "Candy.h"

Candy::Candy() {}

Candy::Candy(string name, float mass, int amount, float price, type candytype)
{
    this->candytype = candytype;
    this->name = name;
    this->mass = mass;
    this->amount = amount;
    this->price = price;
}
Candy::~Candy() {};

string Candy::get_name() {
    return name;
}
float Candy::get_mass() {
    return mass;
}
int Candy::get_amount() {
    return amount;
}
float Candy::get_price() {
    return price;
}


void Candy::ate()
{
    if (mass * amount > 2) {
        cout << "\nYou are on diet!";
    }
    else {
        cout << "\nWhat delicious candies!";
    }
}
void Candy::print() {
    std::cout << "\nName " << name << std::endl;
    std::cout << "\nmass" << mass << std::endl;
    std::cout << "\namount " << amount << std::endl;
    std::cout << "\nprice " << price << std::endl;
    std::cout << "\ntype " << gettypeName();
}
string Candy::gettypeName() {
    switch (candytype) {
    case 0: return "BAR";
    case 1: return "BUTTON";
    case 2: return "POPCORN";
    case 3: return "GUM";
    case 4: return "SNICKERS";
    case 5: return "BOUNTY";
    case 6: return "MILKYWAY";
    }
    return "noun";
}