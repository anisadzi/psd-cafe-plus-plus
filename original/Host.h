#ifndef HOST_H
#define HOST_H

#include "Manager.h"
#include <string>

class Host {
private:
    Manager* manager;

public:
    void takeFoodOrder(const std::string& foodItem);
    void takeDrinkOrder(const std::string& drinkItem, const std::string& customization);
    void setManager(Manager* mgr);
};

#endif // HOST_H

