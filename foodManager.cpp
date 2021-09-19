#include "foodManager.h"

bool FoodManager::tableAvailable(int tableNum) {
    for(int i=0;i<41;i++) {
        if(table[i]->getTableNum() == tableNum) {
            table[i]->setTableStatus(false);
            return true;
        }
    }
    return false;
}

int FoodManager::getTable(int seats) {
   for(int i=0;i<41;i++) {
        if(table[i]->getSeats() == seats && table[i]->getTableStatus()) {
            return table[i]->getTableNum();
        }
    }
    return 0;
}

void FoodManager::getTableOrder(int tableNum) {
    TableOrder * tableOrder;
    int index = 0;
     for(int i=0;i<41;i++) {
        if(table[i]->getTableNum() == tableNum) {
            break;
        }
    }
}
