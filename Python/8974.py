import math

class Summation:
	def __init__(self, a, b):
		self._a = a
		self._b = b
		self._sum = 0
	
	def Quadratic(self, i):
		p = int((1 + math.sqrt(1 + 8 * i)) / 2)
		return p
	
	def Add(self):
		for j in range(self._a - 1, self._b):
			self._sum += self.Quadratic(j)
		return self._sum
		

x, y = map(int, input().split())
print(Summation(x, y).Add())	

