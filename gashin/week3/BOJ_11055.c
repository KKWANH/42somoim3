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
	int max = 0, maxdp;

	for (int i = 1; i <= n; i++)
		scanf("%d", &Arr[i]);
	for (int i = 1; i <= n; i++) {
		maxdp = 0;
		for (int j = 0; j < i; j++)
			if (Arr[i]>Arr[j])
				if (maxdp < dp[j]) maxdp = dp[j];
		dp[i] = maxdp + Arr[i];
		if (max < dp[i]) max = dp[i];
	}
	return max;
}