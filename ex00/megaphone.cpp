#include <iostream>

void check_leaks() {
	std::cout << std::endl;
	system("leaks -q megaphone");
}

int main(int argc, char *argv[])
{
	atexit(&check_leaks);
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_SUCCESS);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
