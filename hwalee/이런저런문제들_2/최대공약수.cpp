#include <iostream>
using namespace std;
typedef unsigned long long ul;


int main()
{
	ul x, y;
	ul a, b;
	ul temp;

	cin >> x >> y;
	a = (x >= y) ? x : y;
	b = (x >= y) ? y : x;
	while (1)
	{
		a %= b;
		if (a == 0)
		{
			for (int i = 0; i < b; i++)
				cout << 1;
			break;
		}
		temp = b;
		b = a;
		a = temp;
	}
	cout << '\n';
	return (0);
}
