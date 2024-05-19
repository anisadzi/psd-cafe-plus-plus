//#ifndef ORDER_H
//#define ORDER_H
//
//#include "Food.h" // Include Food header file
//#include "Drink.h" // Include Drink header file
//#include <vector>
//
//class Order {
//private:
//    std::vector<Food*> foods;
//    std::vector<Drink*> drinks;
//
//public:
//    void addFood(Food* food);
//    void addDrink(Drink* drink);
//};
//
//#endif // ORDER_H

#ifndef ORDER_H
#define ORDER_H

#include "Food.h"
#include "Drink.h"

class Order {
public:
    void addFood(Food* food);
    void addDrink(Drink* drink);
};

#endif // ORDER_H

