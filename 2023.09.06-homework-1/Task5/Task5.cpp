#include <iostream>
using namespace std;
main()
{
	int v, t;
	cin >> v >> t;
	cout << (v * t % 109 + 109) % 109 + 1; // ����������� > -109, ���� ��� ����� >0
	return 0;
} 