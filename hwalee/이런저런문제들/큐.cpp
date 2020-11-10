#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	int n, data;
	queue <int> qu;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "push")
		{
			cin >> data;
			qu.push(data);
		}
		else if (str == "pop")
		{
			if (!qu.empty())
			{
				cout << qu.front() << '\n';
				qu.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (str == "size")
			cout << qu.size() << '\n';
		else if (str == "front")
		{
			if (qu.empty())
				cout << -1 << '\n';
			else
				cout << qu.front() << '\n';
		}
		else if (str == "back")
		{
			if (!qu.empty())
				cout << qu.back() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (str == "empty")
		{
			if (qu.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
	}
	return (0);
}
