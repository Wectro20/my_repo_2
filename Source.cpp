#include <iostream>
#include "Dinner.h"

int main() {
    Dinner d(1, 12.0, 7);
    d.initcandysinarray(Candy("BAR", 24, 4, 100, BAR), 0);
    d.initcandysinarray(Candy("BUTTON", 0.1, 4, 26.5, BUTTON), 1);
    d.initcandysinarray(Candy("POPCORN", 0.3, 4, 75.5, POPCORN), 2);
    d.initcandysinarray(Candy("GUM", 0.4, 4, 95, GUM), 3);
    d.initcandysinarray(Candy("SNICKERS", 0.2, 4, 30, SNICKERS), 4);
    d.initcandysinarray(Candy("BOUNTY", 0.3, 4, 48, BOUNTY), 5);
    d.initcandysinarray(Candy("MILKYWAY", 0.1, 4, 12, MILKYWAY), 6);
    d.getfromarraycandy(0).ate();
    d.findthemostexpensivecandies("Rob joi");
    d.getfromarraycandy(0).print();

    return 0;
}