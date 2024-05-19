#include "Host.h"
#include "Manager.h"
#include "Patron.h"
#include "Order.h"
#include <iostream>

int main() {
    // Get patron name as input
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Create a patron with the provided name
    Patron patron(name);
    // Patron enters the café
    patron.enterCafe();

    // Instantiate objects
    Host host;
    Manager manager;

    // Create an order
    Order order;
    // Add food and drink items to the order

    // Patron interacts with the Host
    host.takeOrder(patron, order);

    // Manager processes the order
    manager.processOrder(order);

    // Host serves the order to the Patron
    host.serveOrder(patron, order);

    return 0;
}

