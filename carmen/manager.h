// Manager.h
#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "order.h"
#include "foodMaker.h"
#include "coffeeMaker.h"
#include "coffee.h"

class Manager {
public:
    Manager(FoodMaker& foodMaker, CoffeeMaker& coffeeMaker) 
        : foodMaker(foodMaker), coffeeMaker(coffeeMaker) {}

    void getOrder(const Order& order) {
        // Process the order by delegating tasks to foodMaker and coffeeMaker
        for (const auto& item : order.getItems()) {
            if (auto coffee = std::dynamic_pointer_cast<Coffee>(item)) {
                coffeeMaker.makeCoffee(coffee);
            } else {
                foodMaker.prepareFood();
            }
        }
    }

private:
    FoodMaker& foodMaker;
    CoffeeMaker& coffeeMaker;
};

