#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	if ((n % 100 >= 11) && (n % 100 <= 20)) // оканчивается ли на 11, 12,..., 20
	{
		std::cout << n << " bochek";
	}
	else if (n % 10 == 1)
	{
		std::cout << n << " bochka";
	}
	else if ((n % 10 == 2) || (n % 10 == 3) || (n % 10 == 4))
	{
		std::cout << n << " bochki";
	}
	else
	{
		std::cout << n << " bochek";
	}

	return EXIT_SUCCESS;
}