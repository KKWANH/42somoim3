#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n, k;
	int i = 1;
	queue <int> qu;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		qu.push(i);
	cout << '<';
	while (1)
	{
		if (qu.size() == 1)
		{
			cout << qu.front();
			break;
		}
		if (i % k == 0)
		{
			cout << qu.front() << ',' << ' ';
			qu.pop();
		}
		else
		{
			qu.push(qu.front());
			qu.pop();
		}
		i++;
	}
	cout << '>';
}
