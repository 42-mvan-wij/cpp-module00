#include <iostream>
#include "PhoneBook.hpp"
#include "utils.hpp"

void check_leaks() {
	std::cout << std::endl;
	system("leaks -q phonebook");
}

int main(void) {
	atexit(&check_leaks);
	PhoneBook phone_book;
	while (true) {
		if (std::cin.eof())
			break ;
		std::string str = utils::prompt("Command: ");
		if (std::cin.eof())
			break ;
		else if (str == "ADD" || str == "add") {
			phone_book.add();
			std::cout << std::endl;
		}
		else if (str == "SEARCH" || str == "search") {
			phone_book.display();
			phone_book.search();
			std::cout << std::endl;
		}
		else if (str == "EXIT" || str == "exit")
			break ;
	}
	return (0);
}
