#pragma once

#include <string>
class Item {
private:
	std::string name;
	int quantity;
	std::string category;
	bool purchased;

public:
	Item(std::string name, int quantity, std::string category, bool purchased);
	
	std::string getName() const;
	int getQuantity() const;
	std::string getCategory() const;
	bool isPurchased() const;

};
