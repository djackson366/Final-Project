#include "Sandwich.h"



template<typename T>
void Sandwich::printComponent(std::vector<T> comp)
{
	if (comp.front() != NOTHING)
	{
		std::cout << comp;
	}
}

int Sandwich::calcPrice(int numMeat, int numSauce, int numBread, int numTopping, int numCheese)
{
	return (numMeat * meatPrice) + (numSauce * saucePrice) + (numBread * breadPrice) + (numTopping * toppingPrice) + (numCheese * cheesePrice);
}

void Sandwich::printPrice()
{
	std::cout << "The total price for the sandwich is " << totalPrice;
}

void Sandwich::getIngredients()
{
	int servings;
	std::cout << "How many servings of meat do you want on you sandwich? : ";
	std::cin >> servings;

	for (int i = 0; i < servings; i++)
	{
		std::cout << "Type of meat for serving " << i + 1 << ": ";
		std::cin >> "";
	}
}