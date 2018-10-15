class Square:
	def __init__(self, N):
		self._n = N
		self._digits = 0

	def digit(self):
		x = self._n
		while x > 0:
			x //= 10
			x += 1
		self._digits = x

	def construct(self, num, digits):
		flag = 0
		ans = 0
		while flag < digits:
			ans += (num % 10) * (10 ** flag)
			flag += 1
		return ans

	def compare(self):
		self.digit()
		square = self._n ** 2
		if self.construct(square, self._digits) == self._n:
			print("YES")
		else:
			print("NO")

tc = int(input())
for i in range(tc):
	k = int(input())
	Square(k).compare()





