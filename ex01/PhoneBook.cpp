#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook() {
	contact_index = 0;
	contact_count = 0;
}

PhoneBook::~PhoneBook() {
	for (int i = 0; i < contact_count; i++) {
		delete contacts[i];
	}
}

void	PhoneBook::add() {
	Contact *new_contact;
	try {
		new_contact = new Contact();
	} catch (const std::invalid_argument& e) {
		std::cerr << "Failed to create new contact: " << e.what() << std::endl;
		return ;
	}
	if (contact_count == 8)
		delete contacts[contact_index];
	contacts[contact_index] = new_contact;
	std::cout << "Successfully added new contact" << std::endl;
	contact_index++;
	contact_index %= 8;
	if (contact_count < 8)
		contact_count++;
};

void	PhoneBook::display() {
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < contact_count; i++) {
		Contact *contact = contacts[i];
		utils::print_pad(i, 10);
		std::cout << "|";
		contact->print_basic();
		std::cout << std::endl;
	}
};

void	PhoneBook::search() {
	std::string index_str = utils::prompt("Index of entry: ");
	int index;
	if (!utils::parse_int(index, index_str)) {
		std::cerr << "\"" << index_str << "\" in not an integer" << std::endl;
		return ;
	}
	if (index < 0 || index >= contact_count)
	{
		std::cerr << index << " is out of range (" << 0 << ", " << contact_count - 1 << ")" << std::endl;
		return ;
	}
	contacts[index]->print();
};
