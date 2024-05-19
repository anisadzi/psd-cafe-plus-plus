#pragma once

#include "Order.h"
#include "Patron.h"

class Host {
public:
    void takeOrder(Patron& patron, Order& order);
    void serveOrder(Patron& patron, Order& order);
};

