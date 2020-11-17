N, M = map(int, input().split())
matrix = [[0] * (N + 1) for i in range(N + 1)]
for i in range(M):
	a, b = map(int, input().split())
	matrix[a][b] = matrix[b][a] = 1
visit_list = [0] * (N + 1)

def dfs(V):
	visit_list[V] = 1
	for i in range(N + 1):
		if (matrix[V][i] == 1 and visit_list[i] == 0):
			dfs(i)
def bfs(V):
	queue = [V]
	visit_list[V] = 1
	while queue:
		V = queue.pop(0)
		for i in range(N + 1):
			if (matrix[V][i] == 1 and visit_list[i] == 0):
				queue.append(i)
				visit_list[i] = 1
count = 0
for i in range(1, N + 1):
	if (visit_list[i] == 0):
		bfs(i)
		count += 1
print(count)
