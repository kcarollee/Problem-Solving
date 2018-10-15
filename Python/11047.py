class Wallet:
	def __init__(self, arr):
		self._arr = arr
		self._coins = 0

	def calc(self, k):
		for i in reversed(range(0, len(self._arr))):
			if self._arr[i] > k:
				continue
			else:
				self._coins += k // self._arr[i]
				if k % self._arr[i] == 0:
					return self._coins
				k -= self._arr[i] * (k // self._arr[i])
		return self._coins

N, K = map(int, input().split())
arr = []
for i in range(N):
	arr.append(int(input()))
inst = Wallet(arr)
print(inst.calc(K))