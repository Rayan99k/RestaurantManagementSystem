#include<iostream> 
using namespace std;
#include "food.h"
#ifndef VEGITARIANPIZZA_H
#define VEGITARIANPIZZA_H
class VegetarianPizza : public Food
{
    public:
        virtual double getcost() = 0;
        virtual void print() = 0;
};
#endif