#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool ft_compare(pair <int, int> a, pair <int, int> b)
{
	if (a.second == b.second)
		return (a.first < b.first);
	return (a.second < b.second);
}
int main()
{
	int n, x, y;
	vector < pair <int, int> > arr;

	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}
	sort(arr.begin(), arr.end(), ft_compare);
	for (auto num : arr)
		cout << num.first << " " << num.second << '\n';
}
