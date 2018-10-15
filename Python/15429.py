class Gnome:
	def __init__(self, g, arr):
		self._len = g
		self._arr = arr
		self._ans = None

	def find_king(self):
		for i in range(1, self._len - 1):
			if self._arr[i] != self._arr[i - 1] + 1:
				self._ans = i + 1
				break
		print(self._ans)

if __name__ == "__main__":
	test_case = int(input())
	for j in range(test_case):
		arr = [int(i) for i in input().split()]
		Gnome(arr[0], arr[1:]).find_king()
