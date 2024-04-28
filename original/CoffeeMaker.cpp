#include "CoffeeMaker.h"
#include <iostream>

void CoffeeMaker::makeCoffee(const std::string& drinkItem, const std::string& customization) {
    std::cout << "Making " << drinkItem << " with " << customization << "..." << std::endl;
    // Simulate coffee making process
    std::cout << "Finished making " << drinkItem << " with " << customization << "." << std::endl;
}

