#include <iostream>
#include "Dinner.h"


Dinner::Dinner() {}

Dinner::Dinner(int day, float time, int l)
{
    this->l = l;
    this->day = day;
    this->time = time;
    arrayofcandy = new Candy[l];

}

Dinner::~Dinner() {
    delete[]arrayofcandy;
}


void Dinner::initcandysinarray(Candy candy, int i) {
    if (i <= l) {
        arrayofcandy[i] = candy;
    }
}
Candy Dinner::getfromarraycandy(int i) {
    return arrayofcandy[i];
}

void Dinner::findthemostexpensivecandies(string name)
{
    Candy temp;

    int i, j, first;

    for (i = l - 1; i > 0; i--)
    {
        first = 0;                
        for (j = 1; j <= i; j++)   
        {
            if (arrayofcandy[j].get_price() < arrayofcandy[first].get_price())
                first = j;
        }
        temp = arrayofcandy[first];  
        arrayofcandy[first] = arrayofcandy[i];
        arrayofcandy[i] = temp;
    }




    for (int i = 0; i < 3; i++) {
        std::cout << "\nCandy: " << arrayofcandy[i].get_name() << " ";
        printf("%f\n", arrayofcandy[i].get_price());
    }
}