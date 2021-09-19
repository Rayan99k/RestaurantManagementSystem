#include "salad.h"

double Salad::getcost()
{
    setBascost(4.0);
    if(getSize().compare("S")) {
        return getBasCost();
    } else if(getSize().compare("M")) {
        return getBasCost() * (1.5);
    } else {
        return getBasCost() * 2;
    }
}

void Salad::print() {
    std::cout<< "Size : " << getSize() << endl;
    std::cout<< "Cost : " << getcost() << endl;
}