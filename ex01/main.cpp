#include <iostream>
#include "PhoneBook.hpp"
#include "utils.hpp"

__attribute__((destructor))
void check_leaks() {
	std::cout << std::endl;
	system("leaks -q phonebook");
}

int main(void) {
	PhoneBook phone_book;
	bool exit = false;
	while (!exit) {
		std::string str = utils::prompt("Command: ");
		if (std::cin.eof())
			exit = true;
		else if (str == "ADD") {
			phone_book.add();
			std::cout << std::endl;
		}
		else if (str == "SEARCH") {
			phone_book.display();
			phone_book.search();
			std::cout << std::endl;
		}
		else if (str == "EXIT") {
			exit = true;
		}
	}
	return (0);
}
