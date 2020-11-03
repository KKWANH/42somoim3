def	cal():
	A, B = map(int, input().split())
	for i in range(min(A,B), 0, -1):
		if (A % i == 0 and B % i == 0):
			Y = i
			break
	print(Y * (A // Y) * (B // Y))
N = int(input())
for _ in range(N):
	cal()

