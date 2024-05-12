#pragma once

#include <vector>
#include "Food.h"
#include "Drink.h"

class Order {
public:
    void addFood(Food* food);
    void addDrink(Drink* drink);

private:
    std::vector<Food*> foods;
    std::vector<Drink*> drinks;
};

