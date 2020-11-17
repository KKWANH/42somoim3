import sys

num = int(sys.stdin.readline())
dic = {}

for idx in range(num):
    tmp = int(sys.stdin.readline())
    if tmp in dic:
        dic[tmp] += 1
    else:
        dic[tmp] = 1

dic = sorted(dic.items(), key = lambda x : (-x[1], x[0]))

print(dic[0][0])