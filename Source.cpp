#include <iostream>
#include "Dinner.h"

int main() {
    Dinner day(1, 12.0, 7);
    day.initCandysInArray(Candy("BAR", 24, 4, 100, BAR), 0);
    day.initCandysInArray(Candy("BUTTON", 0.1, 4, 26.5, BUTTON), 1);
    day.initCandysInArray(Candy("POPCORN", 0.3, 4, 75.5, POPCORN), 2);
    day.initCandysInArray(Candy("GUM", 0.4, 4, 95, GUM), 3);
    day.initCandysInArray(Candy("SNICKERS", 0.2, 4, 30, SNICKERS), 4);
    day.initCandysInArray(Candy("BOUNTY", 0.3, 4, 48, BOUNTY), 5);
    day.initCandysInArray(Candy("MILKYWAY", 0.1, 4, 12, MILKYWAY), 6);
    day.getFromArrayCandy(0).ate();
    day.findTheMostExpensiveCandies("Rob joi");
    day.getFromArrayCandy(0).print();

    return 0;
}
