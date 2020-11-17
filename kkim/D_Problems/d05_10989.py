import sys

num = int(sys.stdin.readline())
arr = [0] * 10001

for idx in range(num):
	arr[int(sys.stdin.readline())] += 1

for idx in range(10001):
	if arr[idx] != 0:
		for jdx in range(arr[idx]):
			print(idx)