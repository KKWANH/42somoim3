#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, min, tmp;
	int* arr;

	cin >> n;
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	free(arr);
	return (0);
}
