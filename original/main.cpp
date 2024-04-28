#include "Patron.h"
#include "Host.h"
#include "Manager.h"
#include "FoodMaker.h"
#include "CoffeeMaker.h"
#include <iostream>

int main() {
    Patron patron;
    Host host;
    Manager manager;
    FoodMaker foodMaker;
    CoffeeMaker coffeeMaker;

    // Set up relationships between components
    host.setManager(&manager);
    manager.setHost(&host);
    manager.setFoodMaker(&foodMaker);
    manager.setCoffeeMaker(&coffeeMaker);

    // Patron enters the café
    patron.enterCafe();

    // Patron places a food order
    std::cout << "What would you like to eat? (Candy / Snack Bars / Chips): ";
    std::string food;
    std::cin >> food;
    host.takeFoodOrder(food);

    return 0;
}

