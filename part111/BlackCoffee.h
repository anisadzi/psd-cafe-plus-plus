#pragma once

#include "Coffee.h"

class BlackCoffee : public Coffee {
public:
    void makeCoffee() const override { // Ensure it matches the base class method signature
        std::cout << "Making Black Coffee with " << getSugarBlocks() << " sugar block(s)." << std::endl;
    }
};

