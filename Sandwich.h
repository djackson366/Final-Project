#include <string>
#include <vector>
#include <array>
#include <iostream>
#pragma once

class Sandwich
{
	double const meatPrice = 0.5;
	double const saucePrice = 0.25;
	double const breadPrice = 1.0;
	double const toppingPrice = 0.25;
	double const cheesePrice = 0.5;
	double totalPrice = 0;

	const std::array<std::string, 4> meatList = { "Ham", "Turkey", "Roast Beef", "Chicken" };
	const std::array<std::string, 4> sauceList = { "Mayo", "Ketchup", "Mustard", "Ranch" };
	const std::array<std::string, 4> breadList = { "White", "Wheat", "Rye", "Italian" };
	const std::array<std::string, 4> toppingList = { "Lettuce", "Tomato", "Peppers", "Olives" };
	const std::array<std::string, 4> cheeseList = { "American", "Swiss", "Provolone", "Munster" };

	std::vector<std::string> meats;
	std::vector<std::string> sauces;
	std::vector<std::string> bread;
	std::vector<std::string> toppings;
	std::vector<std::string> cheeses;

	int calcPrice(int numMeat, int numSauce, int numBread, int numTopping, int numCheese);
	void printPrice();

	void getIngredients();

};