#include <iostream>
#include <stack>
#include <string>
#define MAX_SIZE 250
using namespace std;

bool	ft_check(string str)
{
	stack<char> st;
	int size = (int)str.length();
	for (int i = 0; i < size; i++)
	{
		if (str[i] == '(')
			st.push(str[i]);
		else
		{
			if (!st.empty())
			{
				if (st.top() == '(')
					st.pop();
			}
			else
				return (false);
		}
	}
	return (st.empty());
}
int		main()
{
	int n, size;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (ft_check(str))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return(0);
}
