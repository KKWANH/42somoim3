#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int,int>> v;
	int n; cin>>n;
	while(n--) {
		int a,b; cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end());
	for(auto [a,b] : v) cout << a << " " << b << '\n';
}
