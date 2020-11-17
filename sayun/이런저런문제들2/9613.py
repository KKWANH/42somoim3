def gcd(a, b):
	if a > b:
		a, b = b, a
	if b % a == 0:
		return a
	else:
		return(gcd(a, b % a))

N = int(input())
for i in range(N):
	sum_all = 0;
	li = list(map(int, input().split()))
	for i in range(li[0]):
		for j in range(i + 2, li[0] + 1):
			sum_all += gcd(li[i + 1], li[j])
	print(sum_all)
