// Patron.h
#pragma once

#include <iostream>
#include <string>
using namespace std;
#include "Host.h"

class Patron {
public:
    Patron(const std::string& name, Host& host) : name(name), host(host) {}

    void placeOrder(Order order) {
        host.takeOrder(name, order);
    }

private:
    std::string name;
    Host& host;
};
