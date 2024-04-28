#include "Order.h"

void Order::addItem(Item* item) {
    items.push_back(item);
}

std::vector<Item*> Order::getItems() const {
    return items;
}

