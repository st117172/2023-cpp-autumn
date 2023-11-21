#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a;
	std::cin >> b;
	c = ((a / b) * b) + ((b / a) * a); // неполное частное 
	c = c + ((b % a) % b) + ((a % b) % a); // остаток
	c = c - ((a / b) * b) * (b / a); // страховка от a=b
	std::cout << c;
	return EXIT_SUCCESS;
}