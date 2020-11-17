N, M, V = map(int, input().split())
matrix = [[0]for i in range(N + 1)]
for i in range(M):
	a, b = map(int,input().split())
	matrix[a].append(b)
	matrix[b].append(a)
visit_list = [0] * (N + 1)

s_result = []
def dfs(V, s_result):
	visit_list[V] = 1
	s_result.append(V)
	for i in range(1, N + 1):
		if (i in matrix[V] and visit_list[i] == 0):
			dfs(i, s_result)
dfs(V, s_result)
print(s_result)
