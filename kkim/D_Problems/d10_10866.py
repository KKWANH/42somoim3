import sys

input = sys.stdin.readline
deq = []
num  = int(input())

for idx in range(num):
    cmd = input().rstrip()
    if " " in cmd :
        a,b = cmd.split()
        if a == 'push_front' : deq.insert(0,b)
        elif a == 'push_back' : deq.append(b)
    elif "pop_front" == cmd : 
        if len(deq) == 0 : print(-1)
        else : print(deq.pop(0))
    elif "pop_back" == cmd : 
        if len(deq) == 0 : print(-1)
        else : print(deq.pop(-1))
    elif 'size' == cmd : print(len(deq))
    elif 'empty' == cmd :
        if len(deq) == 0 : print(1)
        else : print(0)
    elif 'front' == cmd :
        if len(deq) == 0 : print(-1)
        else : print(deq[0])
    elif 'back' == cmd :
        if len(deq) == 0 : print(-1)
        else : print(deq[-1])