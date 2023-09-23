#include <iostream>
int main(int argc, char* argv[])
{
	int boy = 0;
	int test = 0;
	std::cin >> test;
	std::cin >> boy;

	if ((test == 1) && (boy == 1) || (test != 1) && (boy != 1))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}



