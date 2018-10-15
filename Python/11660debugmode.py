class Matrix:
	def __init__(self, size, arr):
		self._size = size
		self._arr = arr
		self._sum = 0

	def index(self, x1, y1, x2, y2):
		if x1 == x2 and y1 == y2:
				self._sum += int(arr[x1-1][y1-1])
				return self._sum
		
		for i in range(x2 - x1 + 1):
			j = 0
			if x1+i < x2:
				while y1 + j != self._size + 1:
					self._sum += int(arr[x1 + i - 1][y1 + j -1])
					print(x1 + i, y1 + j, arr[x1 + i - 1][y1 + j - 1])
					j += 1
					

			elif x1+i == x2:
					
				while y1 + j != y2 + 1:
					self._sum += int(arr[x1 + i - 1][y1 + j - 1])
					print(x1 + i, y1 + j, arr[x1 + i - 1][y1 + j - 1])
					j += 1
		return self._sum
	
	def clear(self):
		self._sum = 0
size, tc = map(int, input().split())
arr = [input().split() for i in range(size)]
cc = Matrix(size, arr)
for j in range(tc):
	x1, y1, x2, y2 = map(int, input().split())
	print(cc.index(x1, y1, x2, y2))
	cc.clear()




