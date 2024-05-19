//#include "Patron.h"
//#include "Order.h" // Include the Order header file
//
//void Patron::placeOrder() {
//    // Create an order object
//    Order order;
//
//    // Add food items to the order
//    order.addFood(new CandyBar());
//    order.addFood(new Crisp());
//
//    // Add drink items to the order
//    order.addDrink(new WhiteCoffee());
//    order.addDrink(new BlackCoffee());
//
//    // Do something with the order, e.g., pass it to the Host
//    // host.takeOrder(*this, order);
//}

//#include "Order.h"
//
//// Function to add food to order
//void Order::addFood(Food* food) {
//    foods.push_back(food);
//}
//
//// Function to add drink to order
//void Order::addDrink(Drink* drink) {
//    drinks.push_back(drink);
//}

#include "Order.h"
#include <iostream>

// Implement the addFood method
void Order::addFood(Food* food) {
    // Add implementation here
    std::cout << "Food added to order" << std::endl;
}

// Implement the addDrink method
void Order::addDrink(Drink* drink) {
    // Add implementation here
    std::cout << "Drink added to order" << std::endl;
}


