#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;

int ft_compare(int a, int b)
{
	return (a < b);
}
int main()
{
	int n, num, ind;
	vector <int> v;

	scanf("%d %d", &n, &ind);
	while (n--)
	{
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end(), ft_compare);
	printf("%d", v[ind - 1]);
}
