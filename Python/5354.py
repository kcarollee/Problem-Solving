class Box:
	def __init__(self, size):
		self._size = size

	def draw(self):
		for i in range(self._size):
			for j in range(self._size):
				if i == 0 or i == self._size - 1:
					print("#", end = '')
				else:
					print("#", end = '')
					print("J" * (self._size - 2), end = '')
					print("#", end = '')
					break
			print()
		print()

if __name__ == "__main__":
	test_case = int(input())
	for i in range(test_case):
		size = int(input())
		Box(size).draw()


