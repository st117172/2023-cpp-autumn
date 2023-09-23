#include <iostream>
int main(int argc, char* argv[])
{
	int a = 0;  //  пока не работает :|
	int b = 0;
	int c = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a <= b)
	{
		if (c <= a)
		{
			a = a - b;
			b = b + a;
			c = c + a;
			a = c - a;
			c = c - b + a;
		}
		if ((c >= a) && (c <= b))
		{
			b = c - b;
			c = c - b;
			b = b + c;
		}
	}
	else
	{
		if (c <= b)
		{
			a = c - a;
			c = c - a;
			a = a + c;
		}
		if ((c >= b) && (c <= a))  // тут неправильно 
		{
			a = a - c;
			c = c + a;
			a = a - b;
			b = c - b - a;
			a = c - b - a;
		}
		if (c >= a) // потеряла
		{

		}
	}

	std::cout << a;
	std::cout << b;
	std::cout << c;

	return EXIT_SUCCESS;
}