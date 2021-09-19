#include<iostream> 
using namespace std;
#include "food.h"
#ifndef SALAD_H
#define SALAD_H
class Salad : public Food
{
    public:
        virtual double getcost() = 0;
        virtual void print() = 0;
};
#endif