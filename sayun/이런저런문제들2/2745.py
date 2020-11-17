N, X = map(str, input().split())

result = 0;
for i in N:
	result *= int(X)
	if ord('A') <= ord(i) and ord(i) <= ord('Z'):
		result += ord(i) - ord('A') + 10
	else:
		result += int(i)
print(result)
