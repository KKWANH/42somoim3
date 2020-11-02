#include <string>
#include <iostream>
using namespace std;

int main()
{
	string	str;
	int		arr[26] = { 0, };
	char	ch = 'a';

	cin >> str;
	for (int i = 0 ; i < (int)str.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (ch + j == str[i])
				arr[j]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
	return (0);
}
