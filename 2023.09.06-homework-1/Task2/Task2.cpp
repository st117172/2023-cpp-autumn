#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, m; // модуль n не больше 10^4
	cin >> n;
	m = (n - pow(10,4) - 1)/(pow(10,4) + 1); //множитель для -2: даст -1 при n<=0 и 0 при n>=1
	cout << ((n + 1) * (abs(n) - 2*m)) / 2; // в библиотеке <stdlib> abs() только для int
	// fabs() для double, float, long double, библиотека <cmath>
	return 0;
}