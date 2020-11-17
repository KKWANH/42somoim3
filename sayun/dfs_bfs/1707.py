import sys

input = sys.stdin.readline

K = int(input())

def bfs(v, visited, color):
	q = [v]
	visited[v] = True
	color[v] = 1
	while q:
		now = q.pop(0)
		for nxt in adj_lst[now]:
			if not visited[nxt]:
				q.append(nxt)
				color[nxt] = 1 - color[now]
				visited[nxt] = True
			else:
				if color[now] == color[nxt]:
					return False
	return True

for _ in range(K):
	V, E = map(int, input().split())
	adj_lst = [[] for _ in range(V + 1)]
	visited = [False for _ in range(V + 1)]
	color = [-1 for _ in range(V + 1)]
	flag = True
	for _ in range(E):
		a, b = map(int, input().split())
		adj_lst[b].append(a)
		adj_lst[a].append(b)
	for node in range(1, V + 1):
		if not visited[node]:
			if not bfs(node, visited, color):
				flag = False
				break
	if flag == False:
		print("NO")
	else:
		print("YES")



