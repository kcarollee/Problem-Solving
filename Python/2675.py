class Repetition:
	def __init__(self, R, arr):
		self._r = R
		self._arr = arr
		self._new = []

	def repeat(self):
		for i in range(len(self._arr)):
			self._new += [self._arr[i]] * self._r
		for j in self._new:
			print(j, end = '')

tc = int(input())
for x in range(tc):
	R, arr = input().split()
	R = int(R)
	arr = list(arr)
	Repetition(R, arr).repeat()
	print()
