#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int,int>> v;
	int n; cin>>n;
	while(n--) {
		int a,b; cin>>a>>b;
		v.push_back({b,a});
	}
	sort(v.begin(),v.end());
	for(auto [b,a] : v) cout << a << " " << b << '\n';
}
