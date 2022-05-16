#include "Contact.hpp"
#include "utils.hpp"
#include <iomanip>

Contact::Contact() {
	first_name = utils::prompt("First Name: ");
	if (first_name == "")
		throw std::invalid_argument("No empty fields allowed");
	last_name = utils::prompt("Last Name: ");
	if (last_name == "")
		throw std::invalid_argument("No empty fields allowed");
	nickname = utils::prompt("Nickname: ");
	if (nickname == "")
		throw std::invalid_argument("No empty fields allowed");
	phone_number = utils::prompt("Phone Number: ");
	if (phone_number == "")
		throw std::invalid_argument("No empty fields allowed");
	darkest_secret = utils::prompt("Darkest Secret: ");
	if (darkest_secret == "")
		throw std::invalid_argument("No empty fields allowed");
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
