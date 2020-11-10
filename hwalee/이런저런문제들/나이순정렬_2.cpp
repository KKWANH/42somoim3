#include <iostream>
#include <utility>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
	int n, age;
	string s;
	vector <string> v[201];

	cin >> n;
	while (n--)
	{
		cin >> age;
		cin >> s;
		v[age].push_back(s);
	}

	for (int i = 1; i <= 200; i++)
		for (int j = 0; j < v[i].size(); j++)
			cout << i << " " << v[i][j] << '\n';
	return (0);
}
