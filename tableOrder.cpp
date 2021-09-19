#include "tableOrder.h"

int TableOrder::getTableNum() {
    return tableNum;
}

bool TableOrder::getTableStatus() {
    return tableStatus;
}

void TableOrder::setTableStatus(bool status) {
    tableStatus = status;
}

double TableOrder::getTotalCost() {
    totalCost = 0.0;
    for(int i=0;i<sizeof(customerOrder)/sizeof(customerOrder[0]);i++) {
        totalCost += customerOrder[i]->getOrderCost();
    }
    return totalCost;
}

void TableOrder::print() {
    std::cout << "Table Number : " << tableNum << endl;
    if(tableStatus)
        std::cout << "Table Status : Available" << endl;
    else
    {
        std::cout << "Table Status : Not Available" << endl;
    }
    std::cout << "No. of Seats : " << seats << endl;
    std::cout << "Order Number : " << orderNo << endl;
    std::cout << "Total Cost : " << totalCost << endl;
}