N = int(input())
for M in range(1, N):
	if 3 * M * M - 9 * M + 8 <= N <= 3 * M * M - 3 * M + 1:
		print(M)
