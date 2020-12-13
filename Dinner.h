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
    Dinner(int day, float time, int l);
    ~Dinner();

    void findThemostExpensiveCandies(string name);
    void initCandysInArray(Candy candy, int i);
    Candy getFromArrayCandy(int i);

};
