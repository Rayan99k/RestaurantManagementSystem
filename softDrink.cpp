#include "softDrink.h"

double SoftDrink::getcost()
{
    setBascost(2.0);
    if(getSize().compare("S")) {
        return getBasCost();
    } else if(getSize().compare("M")) {
        return getBasCost() * (1.5);
    } else {
        return getBasCost() * 2;
    }
}

void SoftDrink::print() {
    std::cout<< "Size : " << getSize() << endl;
    std::cout<< "Cost : " << getcost() << endl;
}