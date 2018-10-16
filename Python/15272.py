class String:
	def __init__(self, arr):
		self._arr = arr
		self._len = len(arr)

	def is_hiss(self):
		flag = 0
		for i in range(1, self._len):
			if self.arr[i] == 's' and self.arr[i-1] == 's':
				return True
		return False

	def answer(self):
		if self.is_hiss():
			print("hiss")
		else:
			print("no hiss")

if __name__ == "__main__":
	array = list(input())
	String(array).answer()
	

