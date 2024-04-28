// Food.h
#pragma once

#include "Item.h"

class Food : public Item {
public:
    std::string getDescription() const override {
        return "Food";
    }
};
