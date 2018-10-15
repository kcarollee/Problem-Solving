class Lessthan:
	def __init__(self, arr, x):
		self._arr = arr
		self._x = x

	def is_less_than(self, a, b):
		if a < b:
			return True
		return False

	def indexThru(self):
		for i in range(len(self._arr)):
			if is_less_than(self._arr[i], self._x):
				print(self._arr[i], end = ' ')

tc, x = map(int, input().split())

arr = [int(i) for i in input().split()]
Lessthan(arr, x).indexThru()