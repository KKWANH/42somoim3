#include			<iostream>
#include			<vector>
#include			<algorithm>

using				namespace std;

int					main(void)
{
	int				num;
	int				tmp;
	vector<int>		arr;

	cin				>> num;

	for (int idx = 0; idx < num; idx++)
	{
		cin			>> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	for (int idx = 0; idx < num; idx++)
		cout		<< arr[idx] << "\n";
	
}
