// CoffeeMaker.h
#pragma once

#include <iostream>
using namespace std;
#include "Drink.h"

class CoffeeMaker {
public:
    void makeCoffee(std::shared_ptr<Coffee> coffee) {
        std::cout << "Making coffee: " << coffee->getDescription() << std::endl;
        // Code to make coffee goes here
    }
};
