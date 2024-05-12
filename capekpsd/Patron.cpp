#include "Patron.h"
#include <iostream>

Patron::Patron(const std::string& name) : name(name) {}

std::string Patron::getName() const {
    return name;
}

void Patron::enterCafe() {
    std::cout << "Welcome, " << name << "! Please place your order." << std::endl;
}

