class Game:
	def __init__(self, arr):
		self._arr = arr
		self._one = 0
	
	def count(self):
		for i in range(4):
			if self._arr[i] == 1:
				self._one += 1
		if self._one == 0:
			return "D"
		elif self._one == 1:
			return "C"
		elif self._one == 2:
			return "B"
		elif self._one == 3:
			return "A"
		else:
			return "E"

for j in range(3):
	arr = [int(i) for i in input().split()]
	print(Game(arr).count())
