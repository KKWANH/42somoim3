import sys

num = int(sys.stdin.readline())
arr = []

for idx in range(num):
	[name, kor, eng, math] = map(str, sys.stdin.readline().split())
	arr.append([name, int(kor), int(eng), int(math)])

arr.sort(key = lambda x : (-x[1], x[2], -x[3], x[0]))

for scr in arr:
    print(scr[0])