#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cin >> a;
	std::cin >> b;


	for (int i = 1; i <= a - 2; ++i)
	{
		std::cout << '#';
		for (int j = 1; j <= (b - 2); ++j)
		{
			std::cout << ' ';
		}
		std::cout << '#' << std::endl;
	}

	return EXIT_SUCCESS;
}