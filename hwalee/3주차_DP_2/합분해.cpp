#include <iostream>
using namespace std;

int main()
{
	int N, K;
	int arr[201][201] = { 0, };
	int tmp = 0;

	cin >> N >> K;
	arr[0][0] = 1;
	for (int i = 0; i <= N; i++)
		for (int j = 1; j <= K; j++)
			for (int k = 0; k <= i; k++)
			{
				arr[i][j] += arr[i - k][j - 1];
				arr[i][j] %= 1000000000;
			}
	printf("%d", arr[N][K]);
}
