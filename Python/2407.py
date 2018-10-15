class Combination:
	def __init__(self, n, m):
		self._n = n
		self._m = m

	def factorial(self, a):
		if a == 1:
			return 1
		else:
			return a  * self.factorial(a - 1)

	def division(self):
		return self.factorial(self._n) // (self.factorial(self._m) * self.factorial(self._n - self._m))

n, m = map(int, input().split())
print(Combination(a, b).division())
