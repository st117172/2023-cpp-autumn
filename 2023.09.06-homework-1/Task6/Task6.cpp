#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = ((a / b) * b) + ((b / a) * a); // �������� ������� 
	c = c + ((b % a) % b) + ((a % b) % a); // �������
	c = c - ((a / b) * b)*(b / a); // ��������� �� a=b
	cout << c;
	return 0;
}