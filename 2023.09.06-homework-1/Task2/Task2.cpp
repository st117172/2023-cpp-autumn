#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{
	int n = 0; 
	int m = 0; 
	std::cin >> n; // модуль n не больше 10^4 = 10000
	m = (n - 10000 - 1)/(10000 + 1); //множитель для -2: даст -1 при n<=0 и 0 при n>=1
	std::cout << ((n + 1) * (abs(n) - 2*m)) / 2; // в библиотеке <stdlib> abs() только для int
	// fabs() для double, float, long double, библиотека <cmath>
	return EXIT_SUCCESS;
}