#include <iostream>
using namespace std;

int main()
{
	int x, y, tmp;
	int a, b;

	cin >> x >> y;
	a = x;
	b = y;
	while (1)
	{
		x %= y;
		if (x == 0)
		{
			printf("%d\n", y);
			printf("%d\n", y * (a / y) * (b / y));
			break;
		}
		tmp = y;
		y = x;
		x = tmp;
	}
	return (0);
}
