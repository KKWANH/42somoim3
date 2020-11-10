#include <bits/stdc++.h>
using namespace std;
typedef pair<int, string> pis;

int main() {
	int n; cin >> n;
	vector<pis> v;
	while (n--) {
		int a;
		string b; cin >> a >> b;
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end(), [](const pis &a, const pis &b) {
		return a.first < b.first;
	});
	for (auto [a,b] : v)
		cout << a << " " << b << '\n';

	return 0;
}
