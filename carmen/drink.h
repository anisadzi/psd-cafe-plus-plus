// Drink.h
#pragma once

#include "Item.h"

class Drink : public Item {
public:
    virtual std::string getDescription() const override {
        return "Drink";
    }
};
