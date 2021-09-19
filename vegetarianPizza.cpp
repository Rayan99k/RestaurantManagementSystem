#include "vegetarianPizza.h"

double VegetarianPizza::getcost()
{
    setBascost(5.0);
    if(getSize().compare("S")) {
        return getBasCost();
    } else if(getSize().compare("M")) {
        return getBasCost() * (1.5);
    } else {
        return getBasCost() * 2;
    }
}

void VegetarianPizza::print() {
    std::cout<< "Size : " << getSize() << endl;
    std::cout<< "Cost : " << getcost() << endl;
}