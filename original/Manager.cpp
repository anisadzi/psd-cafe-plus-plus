#include "Manager.h"
#include <iostream>

void Manager::receiveFoodOrder(const std::string& foodItem) {
    std::cout << "Received food order: " << foodItem << std::endl;
    foodMaker->makeFood(foodItem);
}

void Manager::receiveDrinkOrder(const std::string& drinkItem, const std::string& customization) {
    std::cout << "Received drink order: " << drinkItem << " with " << customization << std::endl;
    coffeeMaker->makeCoffee(drinkItem, customization);
}

void Manager::notifyCompletion() {
    std::cout << "Order is complete! Notifying the host." << std::endl;
    host->notifyPatron("Patron", &host->getOrder());
}

void Manager::setHost(Host* h) {
    host = h;
}

void Manager::setFoodMaker(FoodMaker* fm) {
    foodMaker = fm;
}

void Manager::setCoffeeMaker(CoffeeMaker* cm) {
    coffeeMaker = cm;
}

