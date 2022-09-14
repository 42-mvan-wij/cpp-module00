#pragma once
#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		Contact(Contact const &src);
		~Contact();

		Contact &operator=(Contact const &rhs);

		void	print_basic();
		void	print();
};

#endif
