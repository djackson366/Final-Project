#pragma once
#include "Sandwich.h"
#include <vector>
class Order : public Sandwich
{
	// stores all the sandwiched in the order
	std::vector<Sandwich> sandwiches;
	// total price of the order
	int totalPrice;
	// name of the customer who ordered the food
	std::string customerName;
	// gets the order info from the user (how many sandwiches the user wants, what is on them)
	void getOrder();
	// get and set methods for totalPrice
	int getTotalPrice();
	void setTotalPrice(int newPrice);
	// prints the receipt for the user (prints all the sandwiches and toppings, the total price, and the name of
	// the customer)
	void printReceipt();

};