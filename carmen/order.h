// Order.h
#pragma once

#include <memory>
#include <vector>
#include "Food.h"
#include "Drink.h"

class Order {
public:
    void addItem(std::shared_ptr<Item> item) {
        items.push_back(item);
    }

    const std::vector<std::shared_ptr<Item>>& getItems() const {
        return items;
    }

private:
    std::vector<std::shared_ptr<Item>> items;
};