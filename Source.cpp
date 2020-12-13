#include <iostream>
#include "Dinner.h"

int main() {
    Dinner day(1, 12.0, 7);
    day.initcandysinarray(Candy("BAR", 24, 4, 100, BAR), 0);
    day.initcandysinarray(Candy("BUTTON", 0.1, 4, 26.5, BUTTON), 1);
    day.initcandysinarray(Candy("POPCORN", 0.3, 4, 75.5, POPCORN), 2);
    day.initcandysinarray(Candy("GUM", 0.4, 4, 95, GUM), 3);
    day.initcandysinarray(Candy("SNICKERS", 0.2, 4, 30, SNICKERS), 4);
    day.initcandysinarray(Candy("BOUNTY", 0.3, 4, 48, BOUNTY), 5);
    day.initcandysinarray(Candy("MILKYWAY", 0.1, 4, 12, MILKYWAY), 6);
    day.getfromarraycandy(0).ate();
    day.findthemostexpensivecandies("Rob joi");
    day.getfromarraycandy(0).print();

    return 0;
}
