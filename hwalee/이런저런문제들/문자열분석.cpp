#include <string>
#include <iostream>
using namespace std;

int main()
{
	string	str;
	int		size;

	while (getline(cin, str) && !cin.eof())
	{
		int arr[4] = { 0, };
		for (int j = 0; j < (int)str.length() ; j++)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				arr[0]++;
			else if (str[j] >= 'A' && str[j] <= 'Z')
				arr[1]++;
			else if (str[j] >= '0' && str[j] <= '9')
				arr[2]++;
			else if (str[j] == ' ')
				arr[3]++;
		}
		for (int j = 0; j < 4; j++)
			cout << arr[j] << ' ';
		cout << '\n';
	}
}
