def	base_8(result):
	if result != 0:
		base_8(result // 8)
		print(result % 8, end = '')

N = str(input())

result = 0
for i in N:
	result *= 2
	result += int(i)
print(result)
base_8(result);

