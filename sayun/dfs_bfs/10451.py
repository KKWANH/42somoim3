K = int(input())
import sys
sys.setrecursionlimit(500)
for _ in range(K):
	N = int(input())
	li = [0] + list(map(int, input().split()))
	visit_list = [1] + [0] * N

	def dfs(V, visit_list):
		visit_list[V] = 1
		nxt = li[V]
		if (visit_list[nxt] == 0):
			dfs(i, visit_list)
	def bfs(V, visit_list):
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
			dfs(i, visit_list)
			count += 1
	print(count)
