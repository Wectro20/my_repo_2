#pragma once
#include "Candy.h"

class Dinner
{
private:
    int day;
    float time;
    int lengh;
    Candy* arrayofcandy;

public:

    Dinner();
    Dinner(int day, float time, int l);
    ~Dinner();

    void findthemostexpensivecandies(string name);
    void initcandysinarray(Candy candy, int i);
    Candy getfromarraycandy(int i);

};
