#pragma once

# include <string>
# include <sstream>
# include <iomanip>
# include <iostream>

namespace utils {

	std::string	prompt(std::string prompt_text);
	void print_pad_trunc(std::string &str, unsigned int width);

	template<typename T>
	void print_pad(T item, unsigned int width) {
		std::cout << std::setw(width) << item;
	}

	template <typename T>
	bool parse_int(T& output, const std::string& str) {
		char			  c;
		std::stringstream ss(str);
		ss >> output;
		return !(ss.fail() || ss.get(c));
	}

}
