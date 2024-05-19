#include "Host.h"
#include <iostream>

void Host::takeOrder(Patron& patron, Order& order) {
    std::cout << "Taking order for " << patron.getName() << std::endl;
    // Logic to take order from patron and manage interactions
}

void Host::serveOrder(Patron& patron, Order& order) {
    std::cout << "Serving order to " << patron.getName() << std::endl;
    // Logic to serve order to patron
}

