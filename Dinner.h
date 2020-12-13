#pragma once
#include "Candy.h"

class Dinner
{
private:
    int day;
    float time;
    int lengh;
    Candy* arrayOfCandy;

public:

    Dinner();
    Dinner(int day, float time, int lengh);
    ~Dinner();

    void findTheMostExpensiveCandies(string name);
    void initCandysInArray(Candy candy, int i);
    Candy getFromArrayCandy(int i);

};
