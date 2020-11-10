#include <bits/stdc++.h>
using namespace std;
int ans,k=1;
int main() {
	string s; cin>>s;
	for(int i=1;i<s.size();i++) {
		if(s[i]==')') {
			k--;
			if(s[i-1]=='(') ans+=k;
			else ans++;
		}
		else k++;
	}
	cout << ans;
}
