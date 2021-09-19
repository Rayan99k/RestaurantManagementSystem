#include<iostream> 
using namespace std;
#include "tableOrder.h"
#ifndef FOODMANAGER_H
#define FOODMANAGER_H
class FoodManager 
{
    private:
        TableOrder * table[41];
        int n = 0;
    public:
        int getTable(int seats);
        void getTableOrder(int tableNum);
        bool cancelOrder(int orderID);
        bool tableAvailable(int seats);
        void print(int ordrID);
        int search(int orderID);
};
#endif