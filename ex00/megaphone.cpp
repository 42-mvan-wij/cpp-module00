#include <iostream>

__attribute__((destructor))
void check_leaks() {
	std::cout << std::endl;
	system("leaks megaphone");
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (char *s = argv[i]; *s; s++)
			std::cout << static_cast<char>(std::toupper(*s));
	}
	std::cout << std::endl;
	return (0);
}
