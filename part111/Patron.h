#ifndef PATRON_H
#define PATRON_H

#include <string>
#include "Order.h" // Include Order header file

class Patron {
private:
    std::string name;
    Order order; // Add order member variable

public:
    Patron(const std::string& name);
    std::string getName() const;
    void enterCafe();
    void placeOrder(); // Add placeOrder function declaration
};

#endif // PATRON_H

