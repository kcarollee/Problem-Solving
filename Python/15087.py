class Crypt:
	def __init__(self, arr):
		self._arr = arr
		self._len = len(self._arr)
		self._temp1 = []
		self._temp2 = []
		self.divide()
		self._sum1 = 0
		self._sum2 = 0
		self.shuffle()
		self.shuffle2()

	def divide(self):
		self._temp1 = self._arr[0: (self._len//2)]
		self._temp2 = self._arr[(self._len//2): self._len ]

	def shuffle(self):
		for i in range(self._len//2):
			self._sum1 += (ord(self._temp1[i])) - 65
		for j in range(self._len//2):
			self._sum2 += (ord(self._temp2[j])) - 65
		for k in range(self._len//2):
			self._temp1[k] = chr((((ord(self._temp1[k])-65)+self._sum1)%26)+65)
		for l in range(self._len//2):
			self._temp2[l] = chr((((ord(self._temp2[l])-65)+self._sum2)%26)+65)

	def shuffle2(self):
		for i in range(self._len//2):
			self._temp1[i] = chr((((ord(self._temp1[i])-65)+ord(self._temp2[i])-65)%26)+65)

	def encrypted(self):
		for i in range(self._len//2):
			print(self._temp1[i], end = '')

if __name__ == "__main__":
	arr = list(input())
	Crypt(arr).encrypted()






