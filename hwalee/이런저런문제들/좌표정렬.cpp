#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair <int, int> a , pair <int ,int> b)
{
	if (a.first == b.first)
		return (a.second < b.second);
	return (a.first < b.first);
}

int main()
{
	int n, x, y;
	vector < pair <int, int> > v;

	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), compare);

	for (auto num : v)
		cout << num.first << " " << num.second << "\n";
}
