#include "Order.h"

void Order::addFood(Food* food) {
    foods.push_back(food);
}

void Order::addDrink(Drink* drink) {
    drinks.push_back(drink);
}

