#include<iostream> 
#include "food.h"
using namespace std;
#ifndef CUSTOMERORDER_H
#define CUSTOMERORDER_H
class CustomerOrder
{
    private:
        double cost;
        Food * orderedItems[3];
        int n = 0;
    public:
        void addFoodItem(Food * item);
        void removeFoodItem(Food * item);
        double getOrderCost();
        void print();
};
#endif