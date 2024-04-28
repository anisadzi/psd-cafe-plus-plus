#include "Host.h"
#include <iostream>

void Host::takeFoodOrder(const std::string& foodItem) {
    std::cout << "Your food order is: " << foodItem << std::endl;
    std::cout << "Anything else? (Y/N): ";
    char choice;
    std::cin >> choice;
    if (choice == 'Y' || choice == 'y') {
        std::cout << "What would you like to drink? (Black Coffee / White Coffee): ";
        std::string drink;
        std::cin >> drink;
        takeDrinkOrder(drink, "");
    } else {
        std::cout << "Thank you. Your order is being processed." << std::endl;
        manager->relayOrder("Food: " + foodItem);
    }
}

void Host::takeDrinkOrder(const std::string& drinkItem, const std::string& customization) {
    std::cout << "Your drink order is: " << drinkItem << customization << std::endl;
    if (drinkItem == "Black Coffee" || drinkItem == "White Coffee") {
        std::string sugar;
        std::cout << "Enter sugar amount (%): ";
        std::cin >> sugar;
        takeDrinkOrder(drinkItem, " with " + sugar + "% sugar");
    } else {
        std::cout << "Thank you. Your order is being processed." << std::endl;
        manager->relayOrder("Drink: " + drinkItem + customization);
    }
}

void Host::setManager(Manager* mgr) {
    manager = mgr;
}

