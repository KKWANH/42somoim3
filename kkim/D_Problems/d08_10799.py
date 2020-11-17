import sys

arr = list(sys.stdin.readline())
sta = []
ans = 0
pre = None

for idx in range(len(arr)):
	if arr[idx] == '(':
		sta.append(arr[idx])
	elif pre == '(' and arr[idx] == ')':
		sta.pop()
		ans += len(sta)
	elif pre == ')' and arr[idx] == ')':
		ans += 1
		sta.pop()
	pre = arr[idx]
print(ans)