n, m = map(int, input().split())
arr = [None for i in range(n*n)]
for a in range(n):
	arr[n*a : n*a+n] =[int(x) for x in input().split()]
for tc in range(m):
	x1, y1, x2, y2 = [int (y) for y in input().split()]
	summ = 0
	for c in range((x1 - 1) * n + y1 - 1, (x2 - 1) * n + y2):
		summ += arr[c]
	print(summ)
