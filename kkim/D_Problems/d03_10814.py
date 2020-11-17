import sys

num = int(sys.stdin.readline())
arr = []

for idx in range(num):
    arr.append(list(sys.stdin.readline().split()))

arr.sort(key = lambda x : int(x[0]))

for i in range(num):
    print(arr[i][0], arr[i][1])