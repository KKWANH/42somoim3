#include <bits/stdc++.h>
using namespace std;

int main() {
	priority_queue<int> pq;
	int n, k; scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		int a; scanf("%d",&a);
		pq.push(-a);
	}
	while (k-- > 1) pq.pop();
	printf("%d", -pq.top());
}
