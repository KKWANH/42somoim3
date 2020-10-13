N = int(input())
N = (2 * N) - 1

for i in range(N, 1, -2):
    B = int((N - i) / 2)
    print(' ' * B + '*' * i)

for j in range(1, N + 1, 2):
    B = int((N - j) / 2)
    print(' ' * B + '*' * j)
