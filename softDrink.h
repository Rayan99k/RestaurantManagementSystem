#include<iostream> 
using namespace std;
#include "food.h"
#ifndef SOFTDRINK_H
#define SOFTDRINK_H
class SoftDrink : public Food
{
    public:
        virtual double getcost() = 0;
        virtual void print() = 0;
};
#endif