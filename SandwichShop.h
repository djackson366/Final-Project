#pragma once
#include "Order.h"
class SandwichShop
{
	// number of customers to process
	int numCustomers;
	// a vector of Orders
	std::vector<Order> orders;
	// static variables and their get/set members
	static int totalSandwichesSold;
	static int totalMoneyEarned;
	static int customersProcessed;
	static int getTotalSandwichesSold();
	static int getTotalMoneyEarned();
	static int getCustomersProcessed();
	static void setTotalSandwichesSold(int newSandwiches);
	static void setTotalMoneyEarned(int newAmount);
	static void setCustomersProcessed(int newCustomersProcessed);
	// prints a menu for each customer to view
	void printMenu();
	// takes orders from all the customers
	void takeOrders();
	// prints the static variables when all the customers have been processed
	void printStoreInfo();

};