#include<iostream> 
using namespace std;
#ifndef FOOD_H
#define FOOD_H
class Food
{
    private:
        string size;
        double bascost;

    public:
        string getSize() {
            return size;
        };
        double getBasCost() {
            return bascost;
        };
        void setSize(string _size) {
            size = _size;
        };
        void setBascost(double _bascost) {
            bascost = _bascost;
        };
        virtual double getcost() = 0;
        virtual void print() = 0;
};
#endif