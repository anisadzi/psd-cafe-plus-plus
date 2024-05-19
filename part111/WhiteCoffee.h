#pragma once

#include "Coffee.h"

class WhiteCoffee : public Coffee {
public:
    void makeCoffee() const override { // Ensure it matches the base class method signature
        std::cout << "Making White Coffee with " << getSugarBlocks() << " sugar block(s)." << std::endl;
    }
};

