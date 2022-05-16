#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact *contacts[8];
		int contact_count;
		int contact_index;

	public:
		PhoneBook();
		PhoneBook(PhoneBook const &src);
		~PhoneBook();

		PhoneBook &operator=(PhoneBook const &rhs);

		void	add();
		void	search();
		void	display();
};
