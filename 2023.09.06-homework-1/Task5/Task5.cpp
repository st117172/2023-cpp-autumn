#include <iostream>
int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	std::cin >> v;
	std::cin >> t;
	std::cout << (v * t % 109 + 109) % 109 + 1; // перемещение > -109, круг для числа >0
	return EXIT_SUCCESS;
}
