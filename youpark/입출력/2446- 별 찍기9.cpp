#include <cstdio>
int n, s, t;
int main() {
	scanf("%d", &n);
	s = 2 * n - 1;
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < t; j++) printf(" ");
		for (int j = 0; j < s; j++) printf("*");
		if (i < n - 1) { t++; s -= 2; }
		else { t--; s += 2; }
		printf("\n");
	}
}
