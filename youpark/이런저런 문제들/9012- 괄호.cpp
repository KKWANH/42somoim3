#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
int main() {
	cin >> n;
	while (n--) {
		cin >> s;
		k = 0;
		for (auto &c : s) {
			c=='('?k++:k--;
			if(k<0)break;
		}
		cout << (k?"NO\n":"YES\n");
	}
}
