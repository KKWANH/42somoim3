import sys

input = sys.stdin.readline

N = int(input())
li = []
for _ in range(N):
	li.append(input().split())
for i in range(N):
	for j in range(1, 4):
		li[i][j] = int(li[i][j])
for i in range(N):
	for j in range(i):
		if li[i][1] > li[j][1]:
			temp = li[i]
			li[i] = li[j]
			li[j] = temp
for i in range(N):
	for j in range(i):
		if li[i][1] == li[j][1]:
			if li[i][2] < li[j][2]:
				temp = li[i]
				li[i] = li[j]
				li[j] = temp
for i in range(N):
	for j in range(i):
		if li[i][1] == li[j][1]:
			if li[i][2] == li[j][2]:
				if li[i][3] > li[j][3]:
					temp = li[i]
					li[i] = li[j]
					li[j] = temp
for i in range(N):
	for j in range(i):
		if li[i][1] == li[j][1] & li[i][2] == li[j][2] & li[i][3] == li[j][3]:
			if li[i][0] < li[j][0]:
				temp = li[i]
				li[i] = li[j]
				li[j] = temp
for i in range(N):
	print(li[i][0])
