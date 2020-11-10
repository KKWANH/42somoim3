#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,t; scanf("%d%d",&n,&k);
	vector<int> v(n), ans;
	for(int i=0;i<n;i++) v[i]=i+1;

	int idx = 0;
	while(v.size()) {
		idx += k - 1;
		idx %= v.size();
		ans.push_back(v[idx]);
		v.erase(v.begin()+idx);
	}
	t=ans.back();
	ans.pop_back();
	printf("<");
	for(int a : ans)
		printf("%d, ",a);
	printf("%d>",t);
}
