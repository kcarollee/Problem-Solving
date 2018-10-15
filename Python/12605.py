class Flip:
	def __init__(self, arr):
		self._arr = arr
		self._temp1 = []
		self._temp2 = []

	def stack(self, tc):
		l = len(self._arr)
		for i in reversed(range(l)):
			if self._arr[i] != ' ' and i != 0:
				self._temp1.append(self._arr[i])
			elif self._arr[i] == ' '  or i == 0:
				if i == 0:
					self._temp1.append(self._arr[0])
				while len(self._temp1) > 0:
					self._temp2.append(self._temp1.pop())
				if self._arr[i] == ' ':
					self._temp2.append(' ')
		print("Case #%d: %s" % (tc, ''.join(self._temp2)))

tc = int(input())
for i in range(1, tc + 1):
	arr = list(input())
	Flip(arr).stack(i)
	
