// Host.h
#pragma once

#include <iostream>
#include <string>
using namespace std;
#include "manager.h"
#include "order.h"

class Host {
public:
    Host(Manager& manager) : manager(manager) {}

    void orderFood() {
        manager.prepareFood();
    }

    void orderCoffee() {
        manager.makeCoffee();
    }

    void serveOrder(Order& order) {
        manager.completeOrder(order);
    }

private:
    Manager& manager;
};
