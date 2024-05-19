#pragma once

#include "FoodMaker.h"
#include "CoffeeMaker.h"
#include "Order.h"

class Manager {
public:
    void processOrder(Order& order);

private:
    FoodMaker foodMaker;
    CoffeeMaker coffeeMaker;
};

