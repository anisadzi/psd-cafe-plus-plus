#ifndef ORDER_H
#define ORDER_H

#include "Item.h"
#include <vector>

class Order {
private:
    std::vector<Item*> items;

public:
    void addItem(Item* item);
    std::vector<Item*> getItems() const;
};

#endif // ORDER_H

