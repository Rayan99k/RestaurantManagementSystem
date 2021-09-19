#include<iostream> 
using namespace std;
#include "food.h"
#ifndef ALLDRESSEDPIZZA_H
#define ALLDRESSEDPIZZA_H
class AllDressedPizza : public Food
{
    public:
        virtual double getcost() = 0;
        virtual void print() = 0;
};
#endif