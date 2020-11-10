#include <bits/stdc++.h>
using namespace std;
int n;
long long arr[100000];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	int cnt = 1, max = 1;
	long long ans = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i - 1] == arr[i]) cnt++;
		else cnt = 1;
		if (max < cnt) {
			max = cnt;
			ans = arr[i];
		}
	}
	cout << ans;
}
