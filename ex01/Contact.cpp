#include "Contact.hpp"
#include "utils.hpp"
#include <iomanip>

Contact::Contact() {
	first_name = utils::prompt("First Name: ", false);
	last_name = utils::prompt("Last Name: ", false);
	nickname = utils::prompt("Nickname: ", false);
	phone_number = utils::prompt("Phone Number: ", false);
	darkest_secret = utils::prompt("Darkest Secret: ", false);
}

Contact::~Contact() {}

void Contact::print_basic() {
	utils::print_pad_trunc(first_name, 10);
	std::cout << "|";
	utils::print_pad_trunc(last_name, 10);
	std::cout << "|";
	utils::print_pad_trunc(nickname, 10);
}

void Contact::print() {
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}
