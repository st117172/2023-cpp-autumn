#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	int five = 0;
	int ten = 0;
	int twenty = 0;
	int sixty = 0;
	std::cin >> n;

	if (n >= 60)
	{
		sixty = (n / 60); //билетов по 60 поездок
		n = n - sixty * 60; // осталось поездок 
	}
	if (n >= 20)
	{
		twenty = (n / 20); //билетов по 20 поездок
		n = n - twenty * 20; // осталось поездок 
	}
	if (n >= 10)
	{
		ten = (n / 10); //билетов по 10 поездок
		n = n - ten * 10; // осталось поездок 
	}
	if (n >= 5)
	{
		five = (n / 5); //билетов по 5 поездок
		n = n - five * 5; // билетов с 1 поездкой
	}

	if (n * 15 + (five * 70) + (ten * 125) + (twenty * 230) >= 440)
	{
		n = 0;
		five = 0;
		ten = 0;
		twenty = 0;
		sixty++;
	}
	if (n * 15 + (five * 70) + (ten * 125) >= 230)
	{
		n = 0;
		five = 0;
		ten = 0;
		twenty++;
	}
	if (n * 15 + (five * 70) >= 125)
	{
		n = 0;
		five = 0;
		ten++;
	}
	if (n * 15 >= 70)
	{
		n = 0;
		five++;
	}

	std::cout << n << " ";
	std::cout << five << " ";
	std::cout << ten << " ";
	std::cout << twenty << " ";
	std::cout << sixty << " ";

	return EXIT_SUCCESS;
}