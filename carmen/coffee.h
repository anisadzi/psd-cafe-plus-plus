// Coffee.h
#pragma once

#include "Drink.h"

class Coffee : public Drink {
public:
    Coffee(int sugars) : sugars(sugars) {}

    std::string getDescription() const override {
        return "Coffee with " + std::to_string(sugars) + " sugars";
    }

private:
    int sugars;
};



