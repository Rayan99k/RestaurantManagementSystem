#include "customerOrder.h"

void CustomerOrder::addFoodItem(Food * item) {
    if(n < 3) {
        orderedItems[n] = item;
        n++;
    } else {
        std::cout << "Maximum items for a order is 3";     
    }
}

void CustomerOrder::removeFoodItem(Food * item) {
    if(n == 0) {
        std::cout << "No items to remove from the order";
    } else {
        bool flag = true;
        int temp = -1;
        for(int i=0;i<n;i++) {
            if(item == orderedItems[i]) {
                flag = false;
                temp = i;
                break;
            }
        }
        if(flag) {
            std::cout << "Item doesn't exists";
        } else {
            int i;
            for(i=temp;i<n;i++) {
                orderedItems[i] = orderedItems[i+1];
            }
            n--;
        }
    }
}

void CustomerOrder::print() {
    for(int i=0;i<n;i++) {
        std::cout << "Ordered Items : \n";
        std::cout << "Size : " << orderedItems[i]->getSize() << endl;
        std::cout << "Cost : " << orderedItems[i]->getcost() << endl;
    }
    std::cout << "Total Order cost : " << getOrderCost() << endl;
}

double CustomerOrder::getOrderCost() {
    cost = 0.0;
    for(int i=0;i<n;i++) {
        cost += orderedItems[i]->getcost();
    }
    return cost;
}