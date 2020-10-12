#include <cstdio>

int main() {
	int n, start;
	scanf("%d", &n);
	start = n;
	for (int i = 1; i <= n; i++) {
		int cnt = i;
		for (int j = 1; j <= n * 2 - 1; j++) {
			if (j < start) printf(" ");
			else {
				if ((j - start) % 2 == 0 && cnt--) {
					printf("*");
					if (!cnt) break;
				}
				else printf(" ");
			}
		}
		printf("\n");
		start--;
	}
}
