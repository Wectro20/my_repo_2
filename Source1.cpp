#include <iostream>
#include "Dinner.h"


Dinner::Dinner() {}

Dinner::Dinner(int day, float time, int lengh)
{
    this->lengh = lengh;
    this->day = day;
    this->time = time;
    arrayOfCandy = new Candy[lengh];

}

Dinner::~Dinner() {
    delete[]arrayOfCandy;
}


void Dinner::initCandysInArray(Candy candy, int i) {
    if (i <= lengh) {
        arrayOfCandy[i] = candy;
    }
}
Candy Dinner::getFromArrayCandy(int i) {
    return arrayOfCandy[i];
}

void Dinner::findTheMostExpensiveCandies(string name)
{
    Candy temp;

    int i, j, first;

    for (i = lengh - 1; i > 0; i--)
    {
        first = 0;
        for (j = 1; j <= i; j++)
        {
            if (arrayOfCandy[j].get_price() < arrayOfCandy[first].get_price())
                first = j;
        }
        temp = arrayOfCandy[first];
        arrayOfCandy[first] = arrayOfCandy[i];
        arrayOfCandy[i] = temp;
    }




    for (int i = 0; i < 3; i++) {
        std::cout << "\nCandy: " << arrayOfCandy[i].get_name() << " ";
        printf("%f\n", arrayOfCandy[i].get_price());
    }
}
