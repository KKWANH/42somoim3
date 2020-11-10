s=input()
l=[s[i:] for i in range(len(s))]
l.sort()
for k in l:
	print(k)
