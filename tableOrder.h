#include<iostream> 
using namespace std;
#include "customerOrder.h"
#ifndef TABLEORDER_H
#define TABLEORDER_H
class TableOrder 
{
    private:
        int tableNum;
        bool tableStatus;
        int seats;
        static int orderNo;
        int myOrderNo;
        CustomerOrder ** customerOrder;
        double totalCost;
    public:
        void setTableStatus(bool status);
        int getSeats();
        int getTableNum();
        bool getTableStatus();
        double getTotalCost();
        void print();
};
#endif