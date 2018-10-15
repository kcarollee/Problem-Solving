class Crypt:
	def __init__(self, arr):
		self._arr = arr

	def decipher(self):
		l2 = list(set(self._arr))
		flag = 0
		M = len(l2)
		N = len(self._arr)
		for i in range(M):
			for j in range(N):
				if self._arr[j] == l2[i]:
					flag += 1
				if flag % 4 == 3:
					if j == N-1:
						if self._arr[j] == self._arr[-1]:
							return False
					elif j < N-1:
						if self._arr[j] != self._arr[j+1]:
							return False
			flag = 0
		return True

tc = int(input())
for i in range(tc):
	array = list(input())
	cc = Crypt(array)
	
	if cc.decipher():
		print("OK")
	else:
		print("FAKE")

