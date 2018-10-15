class Quiz:
	def __init__(self, arr):
		self._summ = 0
		self._ocount = 0
		self._arr = arr

	def countSum(self):
		for i in range(len(self._arr)):
			if i == 0:
				if self._arr[i] == 'O':
					self._ocount += 1
					self._summ += self._ocount
					
				else:
					continue
			else:
				if self._arr [i-1] == 'O' and self._arr[i] == 'O':
					self._ocount += 1
					self._summ += self._ocount
					
				elif self._arr [i-1] == 'O' and self._arr [i] == 'X':
					self._ocount = 0
					
				elif self._arr [i-1] == 'X' and self._arr [i] == 'O':
					self._ocount += 1
					self._summ += self._ocount
					
				elif self._arr [i-1] == 'X' and self._arr[i] == 'X':
					continue
		
		return self._summ

tc = int(input())
for i in range(tc):
	arr = list(input())
	cc = Quiz(arr)
	print(cc.countSum())
