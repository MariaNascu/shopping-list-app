#include "ShoppingListUtils.h"
#include <iostream>

void printList(const std::vector<Item>& list) {
	std::cout << "******************** SHOPPING LIST ********************";
	const std::string STRIKE = "\033[9m";
	const std::string RESET = "\033[0m";
	std::map<std::string, std::vector<Item>> groupedItems;
	for (const auto& item : list)
	{
		groupedItems[item.getCategory()].push_back(item);
		
	}
	for (const auto& groupeditem : groupedItems)
	{
		std::cout << "\nCategory: " << groupeditem.first << "\n";

		for (const Item& item : groupeditem.second)
		{
			std::cout << (item.isPurchased() ? "[x] " + STRIKE + item.getName() + RESET : "[ ] " + item.getName())
				<< " x" << item.getQuantity() << "\n";
		}
	}


}
