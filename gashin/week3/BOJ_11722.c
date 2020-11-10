#include <stdio.h>

int dp_max_inc(int n);

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", dp_max_inc(n));
}
int dp_max_inc(int n) {
	int dp[1100];
	int Arr[1100];
	int max = 0, min;
	for (int i = 1; i <= n; i++)
		scanf("%d", &Arr[i]);
	for (int i = 1; i <= n; i++) {
		min = 0;
		for (int j = 0; j < i; j++) {
			if (Arr[i] < Arr[j]) {
				if (min < dp[j])
					min = dp[j];
			}
		}
		dp[i] = min + 1;
		if (max < dp[i])
			max = dp[i];
	}
	return max;
}