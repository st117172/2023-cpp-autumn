#include <iostream>
using namespace std;
int main() // ���� int ��������� � return 0? � ��� � ����?
{
	long long a;
	cin >> a;
	cout << (a / 10) * ((a / 10) + 1) * 100 + 25;

	return 0;
}