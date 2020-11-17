def conv(N):
	if N != 0:
		conv(N // -2)
		print(N % 2, end='')
N = int(input())
if N == 0:
	print(0)
else:
	conv(-N)
