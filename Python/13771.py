class Prices:
	def __init__(self, arr):
		self._arr = arr
		self._arr2 =sorted(self._arr)

	def answer(self):
		print("%.2f" % (self._arr2[1]))

if __name__ == "__main__":
	n = int(input())
	arr = []
	for i in range(n):
		a = float(input())
		arr.append(a)
	Prices(arr).answer()

