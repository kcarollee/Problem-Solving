class Board:
	def __init__ (self, arr):
		self._arr = arr
		self._pieces = 0

	def indexThru(self):
		for a in range(0, 7, 2):
			for b in range(0, 7, 2):
				if self._arr[a][b] == 'F':
					self._pieces += 1
		for c in range(1, 8, 2):
			for d in range(1, 8, 2):
				if self._arr[a][b] == 'F':
					self._pieces += 1
		return self._pieces

arr = [list(input()) for i in range(8)]
Board(arr).indexThru()