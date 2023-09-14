#include <iostream>
using namespace std;
int main() // этот int относится к return 0? а ещё к чему?
{
	long long a;
	cin >> a;
	cout << (a / 10) * ((a / 10) + 1) * 100 + 25;

	return 0;
}