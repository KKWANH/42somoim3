#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool ft_compare(pair <pair <int, string>, int> a, pair <pair <int, string>, int> b)
{
	if (a.first.first == b.first.first)
		return (a.second < b.second);
	return (a.first < b.first);
}
int main()
{
	int n, age;
	int i;
	string name;
	vector < pair < pair <int, string>, int>> v;

	cin >> n;
	i = 0;
	while (n--)
	{
		i++;
		cin >> age >> name;
		v.push_back(make_pair(make_pair(age, name), i));
	}
	sort(v.begin(), v.end(), ft_compare);

	for (auto i : v)
		cout << i.first.first << " " << i.first.second << '\n';
}
