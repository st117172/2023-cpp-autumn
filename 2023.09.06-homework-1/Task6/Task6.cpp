#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = ((a / b) * b) + ((b / a) * a); // неполное частное 
	c = c + ((b % a) % b) + ((a % b) % a); // остаток
	c = c - ((a / b) * b)*(b / a); // страховка от a=b
	cout << c;
	return 0;
}