#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 2 * n - 1; i++) {
		for (int j = 1; j <= 2 * n; j++) {
			if (i <= n) {
				if (j <= i || 2 * n - i < j) printf("*");
				else printf(" ");
			}
			else {
				if (j <= (2 * n - i) || i < j) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
