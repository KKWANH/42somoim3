#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;
typedef long long l;

int ft_compare(pair <l, int> a, pair <l, int> b)
{
	if (a.second == b.second)
		return (a.first < b.first);
	return (a.second > b.second);
}
int main()
{
	int n;
	l num;
	map<l, int> arr;
	vector <pair <l, int> > v;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%lld", &num);
		arr[num]++;
	}
	copy(arr.begin(), arr.end(), back_inserter(v));
	sort(v.begin(), v.end(), ft_compare);

	printf("%lld", v[0].first);
}
