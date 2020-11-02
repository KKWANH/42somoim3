#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	int n;
	string s;

	cin >> s;
	cin >> n;
	list<char> ed(s.begin(), s.end());
	auto cursor = ed.end();
	while(n--)
	{
		char cmd;
		cin >> cmd;

		if (cmd == 'L')
		{
			if (cursor != ed.begin())
				cursor--;
		}
		else if (cmd == 'D')
		{
			if (cursor != ed.end())
				cursor++;
		}
		else if (cmd == 'B')
		{
			if (cursor == ed.begin())
				continue;
			else if (cursor != ed.begin())
			{
				cursor-- ;
				cursor = ed.erase(cursor);
			}
		}
		else if (cmd == 'P')
		{
			char data;
			cin >> data;
			ed.insert(cursor, data);
		}
	}
	for (auto& x : ed)
	{
		cout << x;
	}

	return (0);
}
