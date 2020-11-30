#pragma once
#include<string>
using namespace std;
enum type { BAR, BUTTON, POPCORN, GUM, SNICKERS, BOUNTY, MILKYWAY };

class Candy
{
private:
    type candytype;
    string name;
    int amount;
    float mass;
    float price;

public:

    Candy();
    Candy(string name, float mass, int amount, float price, type candytype);
    ~Candy();



    string get_name();

    float get_mass();

    int get_amount();

    float get_price();

    void ate();

    void print();
    string gettypeName();
};