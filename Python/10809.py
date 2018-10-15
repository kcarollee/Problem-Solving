class Alphabet:
	
	def __init__(self, arr):
		self._arr = arr
		self._initial = list(-1 for k in range(26))
	
	def alphaList(self):
		cases = len(self._arr)
		for x in range(26):
			for y in range(cases):
				if ord(self._arr[y]) == x + 97:
					self._initial[x] = y
					break
		return self._initial

arr = list(input())
inst = Alphabet(arr)
ansList = inst.alphaList()
for i in range(26):
	print(ansList[i], end = ' ')

 

		
