class Word:
	def __init__(self, arr):
		self._arr = arr
		self._dict = {}
		self._temp = []
		self._set = set(arr)
		self._len = len(arr)
		self._flag = 0

	def standardize(self):
		for i in range(self._len):
			if 97 <= ord(self._arr[i]) <= 122:
				self._arr[i] = chr(ord(self._arr[i]) -32)
		return self._arr

	def count(self):
		for x in self._set:
			self._dict[x] = 0 #initializing a dictionary
		for k, v in self._dict.items():
			for a in range(self._len):	
				if k == self._arr[a]:
					self._dict[k] += 1	
				else:
					continue
		self._temp = list(self._dict.values())
		
		for a, b in self._dict.items():
			if b == max(self._dict.values()):
				self._flag += 1
		if self._flag == 1:
			for p, q in self._dict.items():
				if q == max(self._dict.values()):
					return p
		else:
			return '?'


		
array = list(input())
cc = Word(array)
dd = cc.standardize()
ee = Word(dd)
print(ee.count())
