#include "Patron.h"
#include "Order.h" // Include the Order header file
#include <iostream>
#include "WhiteCoffee.h"
#include "BlackCoffee.h"
#include "CandyBar.h"
#include "Crisp.h"

// Constructor
Patron::Patron(const std::string& name) : name(name) {}

// Getter for name
std::string Patron::getName() const {
    return name;
}

// Function to enter cafe
void Patron::enterCafe() {
    std::cout << "Welcome, " << name << "! Please place your order." << std::endl;
    placeOrder(); // Call placeOrder
}

// Function to place order
void Patron::placeOrder() {
    Order order; // Create an instance of the Order class

    std::cout << "Menu:\n";
    std::cout << "1. Snacks\n";
    std::cout << "2. White Coffee\n";
    std::cout << "3. Black Coffee\n";
    std::cout << "Please enter the number of your choice: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::cout << "Snacks Menu:\n";
            std::cout << "1. Candy Bar\n";
            std::cout << "2. Crisp\n";
            std::cout << "Please enter the number of your choice (0 to finish): ";

            int snackChoice;
            std::cin >> snackChoice;
            while (snackChoice != 0) {
                switch (snackChoice) {
                    case 1:
                        order.addFood(new CandyBar());
                        break;
                    case 2:
                        order.addFood(new Crisp());
                        break;
                    default:
                        std::cout << "Invalid snack choice. Please try again.\n";
                        break;
                }
                std::cout << "Enter another snack choice (0 to finish): ";
                std::cin >> snackChoice;
            }
            break;
        }
        case 2: {
            std::cout << "You have ordered White Coffee.\n";
            WhiteCoffee whiteCoffee;
            int sugarBlocks;
            std::cout << "How many sugar blocks would you like? ";
            std::cin >> sugarBlocks;
            whiteCoffee.setSugarBlocks(sugarBlocks);
            order.addDrink(new WhiteCoffee());
            break;
        }
        case 3: {
            std::cout << "You have ordered Black Coffee.\n";
            BlackCoffee blackCoffee;
            int sugarBlocks;
            std::cout << "How many sugar blocks would you like? ";
            std::cin >> sugarBlocks;
            blackCoffee.setSugarBlocks(sugarBlocks);
            order.addDrink(new BlackCoffee());
            break;
        }
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
    }
}

