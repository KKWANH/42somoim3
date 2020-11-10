#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	int a = 0, b = 0;
	int tmp;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (x >= y)
		{
			a = x;
			b = y;
		}
		else
		{
			a = y;
			b = x;
		}
		while (1)
		{
			a %= b;
			if (a == 0)
			{
				printf("%d\n", b * (x / b) * (y / b));
				break;
			}
			tmp = b;
			b = a;
			a = tmp;
		}
	}
	return (0);
}
