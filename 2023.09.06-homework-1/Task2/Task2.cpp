#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, m; // ������ n �� ������ 10^4
	cin >> n;
	m = (n - pow(10,4) - 1)/(pow(10,4) + 1); //��������� ��� -2: ���� -1 ��� n<=0 � 0 ��� n>=1
	cout << ((n + 1) * (abs(n) - 2*m)) / 2; // � ���������� <stdlib> abs() ������ ��� int
	// fabs() ��� double, float, long double, ���������� <cmath>
	return 0;
}