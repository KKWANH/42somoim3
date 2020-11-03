import sys
import collections

N, K = map(int, input().split())
print = sys.stdout.write
li = collections.deque([x for x in range(1, N + 1)])
print("<")
for _ in range(N - 1):
	count = K
	for __ in range(K):
		count -= 1
		if count == 0:
			print(str(li.popleft()))
			print(", ")
		else:
			temp = li.popleft()
			li.append(temp)
print(str(li.popleft()))
print(">")
