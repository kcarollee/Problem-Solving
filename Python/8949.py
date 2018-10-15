class WrongAddition:
	
	def __init__(self, a, b):
		self._a = a
		self._b = b
		self._ans = []
		self._reversed = []

	def addition(self):
		while self._a > 0 or self._b > 0:
			x, y = a % 10, b % 10
			self._ans.append(x + y)
			a, b = a // 10, b // 10

	def prnt(self):
		for i in reversed(range(self._ans)):
			self._reversed.append(self._ans[i])
		print(''.join([str(j) for j in self._reversed]))

x, y = map(int, input().split())
WrongAddition(x, y).prnt()

