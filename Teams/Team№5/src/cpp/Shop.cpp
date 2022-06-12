#include"Shop.h"

Shop::Shop()
{
	name();
	address();
	profit = 0;

}
String Shop::getName() const
{
	return shopName;
}
String Shop::getAddress() const
{
	return address;
}
double Shop::getProfit() const
{
	return profit;
}

void Shop::setName(const String& newOne)
{
	name = newOne;
}
void Shop::setAddress(const String& address)
{
	this->address = address;
}
void Shop::addToProfit(const double profit)
{
	this->profit = this->profit + profit;
}

void Shop::displayShopInfo() const
{
	std::cout << "Shop: " << getName() << std::endl
		<< "Adddress: " << getAddress() << std::endl
		<< "Profit: " << getProfit()std::endl;
}
void Shop::diplayAddDialog()
{
	//code depending on add functtion from the container
}
void Shop::displayListDialog()
{
	char command;
	std::cout << "Choose whether you want to: " << std::endl;
	std::cout << " a. List available items" << std::endl;
	std::cout << " b. List sold items" << std::endl;

	std::cout << "Write down your choice (a /b )" << std::endl;
	std::cout << ">";
	std::cin >> command;

	if (command == 'a' || command == 'A') {
		//function from container
	}
	else if (command == 'b' || command == 'B') {
		//function from conatainer
	}
	else {
		std::cout << "Invalid command!" << std::endl;
	}
}
void Shop::displaySellDialog()
{
	size_t index;
	std::cout << "Write down the index of the clothing item you sold: ";
	std::cin >> index;
	//function from container
}
void Shop::displayMenu()
{
	std::cout << "Welcome!" << std::endl;
	String cmd;
	while (!(cmd == "quit" || cmd == "Quit")) {
		std::cout <<  " You can choose one of the following options : " << std::endl;
		std::cout << " 1. Add" << std::endl;
		std::cout << " 2. Sell" << std::endl;//same as delete
		std::cout << " 3. List" << std::endl;
		std::cout << " 4. Export sells report(log)" << std::endl;
		std::cout << " 5. Display info about the shop" << std::endl;
		std::cout << " 6. Quit" << std::endl;

		std::cout << "Write down your command: " << std::endl;
		std::cout << ">";
		std::cin >> cmd;

		if (cmd == "add" || cmd == "Add") {
			diplayAddDialog();
		}
		else if (cmd == "sell" || cmd == "Sell") {
			displaySellDialog();//delete function
		}
		else if (cmd == "list" || cmd == "List") {
			displayListDialog();
		}
		else if (cmd == "export" || cmd == "Export") {
			//function from container
		}
		else if (cmd == "display" || cmd == "Display") {
			displayShopInfo();
		}
		else {
			std::cout << "Invalid command" << std::endl;
		}
	}
}
