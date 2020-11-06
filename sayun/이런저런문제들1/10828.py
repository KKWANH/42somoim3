N = int(input())

li = []
for _ in range(N):
    command = list(map(str, input().split()))
    if command[0] == "push":
        li.append(command[1])
    elif command[0] == "pop":
        if (len(li) == 0):
            print(-1)
        else:
            print(li.pop())
    elif command[0] == "size": 
        print(len(li))   
    elif command[0] == "empty":
        if (len(li) == 0):
            print(1)
        else:
            print(0) 
    elif command[0] == "top":
        if (len(li) == 0):
            print(-1)
        else:
            print(li[-1])
