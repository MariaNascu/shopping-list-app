#include "Item.h"
#include <string>

Item::Item(std::string n, int q, std::string c, bool p)
	: name(n), quantity(q), category(c), purchased(p) {
}

std::string Item::getName() const
{
	return name;
}

int Item::getQuantity() const
{
	return quantity;
}

std::string Item::getCategory() const
{
	return category;
}
bool Item::isPurchased() const
{
	return purchased;
}