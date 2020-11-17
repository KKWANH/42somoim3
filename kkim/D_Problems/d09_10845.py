import sys

num = int(sys.stdin.readline())

que = []

for idx in range(num):
    cmd = sys.stdin.readline().split()
    if cmd[0] == "push":
        que.insert(0, cmd[1])
    elif cmd[0] == "pop":
        if len(que) != 0: print(que.pop())
        else: print(-1)
    elif cmd[0] == "size":
        print(len(que))
    elif cmd[0] == "empty":
        if len(que) == 0: print(1)
        else : print(0)
    elif cmd[0] == "front":
        if len(que) == 0: print(-1)
        else: print(que[len(que) -1])
    elif cmd[0] == "back":
        if len(que) == 0: print(-1)
        else: print(que[0])