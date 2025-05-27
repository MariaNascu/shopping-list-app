#include "Item.h"
#include "ShoppingListUtils.h"
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
	std::cout << " How many items do you need on your shopping list? ";
	int numberOfItems;
	std::cin >> numberOfItems;
	std::cin.ignore();
	std::vector<Item> list;

	for(int i =0; i<numberOfItems; ++i)
	{
		std::string name, category, purchasedInput;
		int quantity;
		bool purchased;
		std::cout << " \nItem " << (i+1) << " : \n ";
		std::cout << " \nName : ";
		std::getline(std::cin, name);
		std::cout << " \nQuantity : ";
		std::cin >> quantity;
		std::cin.ignore();
		std::cout << " \nCategory : ";
		std::getline(std::cin, category);
		std::cout << " \nPurchased (yes/no or true/false):  ";
		std::getline(std::cin, purchasedInput);
		std::transform(purchasedInput.begin(), purchasedInput.end(), purchasedInput.begin(), ::tolower);
		if (purchasedInput == "yes" || purchasedInput == "true") {
			purchased = true;
		}
		else if (purchasedInput == "no" || purchasedInput == "false") {
			purchased = false;
		}
		else {
			std::cout << "Invalid input. Please enter yes/no or true/false.\n";
		}
		list.emplace_back(name, quantity, category, purchased);
	};
	printList(list);
	return 0;

}