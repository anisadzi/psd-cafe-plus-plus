#pragma once

#include "Drink.h"
#include <iostream>

class Coffee : public Drink {
public:
    Coffee() : sugarBlocks(0) {}
    
    void setSugarBlocks(int sugar) {
        sugarBlocks = sugar;
    }
    
    int getSugarBlocks() const {
        return sugarBlocks;
    }

    virtual void makeCoffee() const { // Add virtual keyword
        std::cout << "Making coffee with " << sugarBlocks << " sugar block(s)." << std::endl;
    }
    
private:
    int sugarBlocks;
};

