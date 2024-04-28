#ifndef MANAGER_H
#define MANAGER_H

#include <string>

// Forward declaration
class Host;
class FoodMaker;
class CoffeeMaker;

class Manager {
private:
    Host* host;
    FoodMaker* foodMaker;
    CoffeeMaker* coffeeMaker;

public:
    void setHost(Host* h);
    void setFoodMaker(FoodMaker* fm);
    void setCoffeeMaker(CoffeeMaker* cm);
    void relayOrder(const std::string& order);
    void notifyCompletion();
};

#endif // MANAGER_H

