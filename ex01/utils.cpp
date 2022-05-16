#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
// #include <type_traits>

namespace utils {

	std::string	prompt(std::string prompt_text)
	{
		std::string	input;

		std::cout << prompt_text;
		std::getline(std::cin, input);
		return (input);
	}

	void print_pad_trunc(std::string &str, unsigned int width) {
		if (str.length() <= width)
			std::cout << std::setw(width) << str;
		else
			std::cout << str.substr(0, width - 1) << ".";
	}

}
