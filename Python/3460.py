class BinaryIndex:
	def __init__ (self, n):
		self._n = n
		self._binary = 0

	def toBinary (self):
		flag = 0
		while self._n >= 1:
			self._binary += (self._n % 2) * (10 ** flag)
			flag += 1
			self._n //= 2

	def prnt (self):
		self.toBinary()
		b = list(map(int, list(str(self._binary))))
		for i in reversed(range(len(b))):
			if b[i] == 1:
				print(len(b) - 1 - i, end = ' ')

tc = int(input())
for x in range(tc):
	n = int(input())
	BinaryIndex(n).prnt()
	print()
	
