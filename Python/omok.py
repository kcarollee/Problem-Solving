#A simple game of omok
class Omok:
	def __init__(self):
		self._board = [[0] * 16 for i in range(16)]
		self._turns = 0
		self._winflag = 0
	
	def show_board(self):
		for i in range(17):
				
			for j in range(17):
				if i == 0:
					print("%.2d" % (j),end = ' ')
				else:
					if j == 0:
						print("%.2d" % (i),end = ' ')
					else:
						print(self._board[i - 1][j - 1], end = '  ')
			print()
		print()
	
	def place_marker(self, x_pos, y_pos):
		if self._turns % 2 == 0:
			self._board[x_pos - 1][y_pos - 1] = 'W'
			self._turns += 1
			if self.check():
				print("White is the winner!")
				self._winflag = 1
		else:
			self._board[x_pos - 1][y_pos - 1] = 'B'
			self._turns += 1
			if self.check():
				print("Black is the winner!")
				self._winflag = 1
		
	def check(self):
		#horizontal check
		for i in range(16):
			for j in range(12):
				if self._board[i][j] != 0:
					if self._board[i][j] == self._board[i][j + 1] and self._board[i][j + 1] == self._board[i][j + 2] and\
						self._board[i][j + 2] == self._board[i][j + 3] and self._board[i][j + 4]:
							return True
		#vertical check
		for i in range(12):
			for j in range(16):
				if self._board[i][j] != 0:
					if self._board[i][j] == self._board[i + 1][j] and self._board[i + 1][j] == self._board[i + 2][j] and\
						self._board[i + 2][j] == self._board[i + 3][j] and self._board[i + 4][j]:
							return True
		#diagonal check no.1
		for i in range(12):
			for j in range(12):
				if self._board[i][j] != 0:
					if self._board[i][j] == self._board[i + 1][j + 1] and self._board[i + 1][j + 1] == self._board[i + 2][j + 2] and\
						self._board[i + 2][j + 2] == self._board[i + 3][j + 3] and self._board[i + 4][j + 4]:
							return True
		#diagonal check no.2
		for i in range(12):
			for j in range(4, 15):
				if self._board[i][j] != 0:
					if self._board[i][j] == self._board[i + 1][j - 1] and self._board[i + 1][j - 1] == self._board[i + 2][j - 2] and\
						self._board[i + 2][j - 2] == self._board[i + 3][j - 3] and self._board[i + 4][j - 4]:
							return True
		return False
		
	def is_overlapping(self, x, y):
		if self._board[x - 1][y - 1] == 0:
			return False
		else:
			return True
			
			
		
if __name__ == "__main__":
	game = Omok()
	while True:
		if game._turns % 2 == 0:
			print("White's turn. Enter the coordinates of your move: ")
		else:
			print("Black's turn. Enter the coordinates of your move: ")
		print("Enter column number: ", end = '')
		try:
			column = int(input())
		except ValueError:
			print("Coordinate values must be between 0 and 17\n")	
		print("Enter row number: ", end = '')
		try:
			row = int(input())
		except ValueError:
			print("Coordinate values must be between 0 and 17\n")	
		try:

			if column <= 0 or row <=  0:
				print("Coordinate values must be between 0 and 17\n")
			elif game.is_overlapping(column, row):
				print("That space is already occupied. Choose another coordinate. \n")
			else:
				game.place_marker(column, row)
				game.show_board()
		except (ValueError, NameError, IndexError):
			print("Faulty input. Please input your coordinates properly.\n")
		if game._winflag == 1:
			break
	
		
