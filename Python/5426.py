import math
class Crypt:
	def __init__(self, arr):
		self._arr = arr
		self._len = len(arr)
		self._slen = int(math.sqrt(self._len))
		self._board = [[None] * self._slen for i in range(self._slen)]
		self.fill_board()

	def fill_board(self):
		index = 0
		for i in range(self._slen):
			for j in range(self._slen):
				self._board[i][j] = self._arr[index]
				index += 1

	def decrypt(self):
		for i in range(self._slen - 1, -1, -1):
			for j in range(0, self._slen):
				print(self._board[j][i], end = '')

if __name__ == "__main__":
	test_case = int(input())
	for i in range(test_case):
		array = list(input())
		Crypt(array).decrypt()
		print()



