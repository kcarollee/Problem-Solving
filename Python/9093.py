class String:
	def __init__(self, arr):
		self._arr = arr
		self._temp1 = []
		self._temp2 = []

	def flip(self):
		L = len(self._temp1)
		for i in range(L//2):
			self._temp1[i], self._temp1[L-1-i] = self._temp1[L-1-i], self._temp1[i]

	def index(self):
		M = len(self._arr)
		flag = 0
		for j in range(M):
			if self._arr[j] != ' ' and j != M-1:
				self._temp1.append(self._arr[j])
			elif self._arr[j] == ' ':
				self.flip()
				self._temp2 += self._temp1
				self._temp2.append(' ')
				self._temp1 = []
			elif j == M-1:
				self._temp1.append(self._arr[j])
				self.flip()
				self._temp2 += self._temp1
				
		for k in range(len(self._temp2)):
			print(self._temp2[k], end ='')
			
tc = int(input())
for l in range(tc):
	array = list(input())
	ans = String(array)
	ans.index()
	print()
	
