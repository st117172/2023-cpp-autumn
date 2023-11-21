#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
 	int b = 0;
	int c = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a <= b)
	{
		if (c <= a)
		{
			// cab I
			a = a - b;
			b = b + a;
			c = c + a;
			a = c - a;
			c = a + b - c;
		}

		if ((a < c) && (c < b))
		{
			// acb II
			b = c - b;
			c = c - b;
			b = b + c;
		}
	}

	else
	{

		if (c <= b)
		{
			// cba III	ОТРИЦАТ
			a = c - a;
			c = c - a;
			a = a + c;
		}

		if ((b < c) && (c < a))
		{
			// bca IV ОТРИЦАТ
			a = a - c;
			c = c + a;
			a = a - b;
			b = b + a;
			b = c - b;
			a = c - a - b;
		}

		if (c >= a)
		{
			// bac V
			a = b - a;
			b = b - a;
			a = a + b;
		}
	}

	std::cout << a << " ";
	std::cout << b << " ";
	std::cout << c << " ";

	return EXIT_SUCCESS;
}