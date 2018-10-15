class Matrix:
	def __init__(self, size, arr):
		self._size = size
		self._arr = arr
		self._sum = 0

	def index(self, x1, y1, x2, y2):
		for i in range(x2 - x1):
			j = 0
			if i < x2-x1-1:
				while y1 + j != self._size:
					self._sum += arr[x1 + i][y1 + j]
					j += 1

			if i == x2-x1-1:
				while y1 + j != y2-1:
					self._sum += arr[x1 + i][y1 + j]
					j += 1
		return self._sum

size, tc = map(int, input().split())
arr = input().split() for i in range(size)
cc = Matrix(size, arr)
for j in range(tc):
	x1, y1, x2, y2 = map(int, input(),split())
	print(cc.index(x1, y1, x2, y2))




