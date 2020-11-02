#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool ft_compare(string a, string b)
{
	return (a < b);
}

int main()
{
	string str;
	string cpy;
	vector <string> v;

	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		cpy = str.substr(i, str.length() - i);
		v.push_back(cpy);
	}
	sort(v.begin(), v.end(), ft_compare);
	for (auto x : v)
		cout << x << '\n';
}
