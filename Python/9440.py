#Wrong
class Largest:
	def __init__(self, arr):
		self._arr = arr
		self._first = 0
		self._second = 0

	def initialize(self):
		temp = self._arr.sort()
		size = len(self._arr)
		if size % 2 == 0:
			for i in range(size//2):
				self._first += self._arr[i] * (10**((size//2)-1-i))
			for j in range(size//2):
				self._second += self._arr[j + size//2] * (10**((size//2)-1-j))
		elif size % 2 == 1:
			for k in range(size//2 + 1):
				self._first += self._arr[k] * (10**((size//2)-k))
			for l in range(size//2):
				self._second += self._arr[l + size//2 + 1] * (10**((size//2)-1-l))

	def addition(self):
		self.initialize()
		return self._first + self._second
arr = []
while arr != [0]:
	arr = [int(i) for i in input().split()]
	cc = Largest(arr)
	print(cc.addition())
	print(cc._first, cc._second)

