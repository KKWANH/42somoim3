import sys

num = int(sys.stdin.readline())
arr = []

for i in range(num):
	arr.append(list(map(int, sys.stdin.readline().split())))

arr.sort(key = lambda x : (x[0], x[1]))

for i in range(num):
	print(arr[i][0], arr[i][1])