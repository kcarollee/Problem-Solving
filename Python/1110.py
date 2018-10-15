class Cycle:
	def __init__(self, N):
		self._n = N
		self._cycle = 1

	def cycleThru(self):
		if self._n > 9:
			a, b = self._n // 10, self._n % 10
		elif self._n <= 9:
			a, b = 0, self._n
		while 10 * b + (a + b) % 10 != self._n:
			self._cycle += 1
			a, b = (10 * b + (a + b) % 10) // 10, (10 * b + (a + b) % 10) % 10
		return self._cycle

n = int(input())
print(Cycle(n).cycleThru())
