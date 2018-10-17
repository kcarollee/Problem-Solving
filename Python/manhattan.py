#Input is a list of 9 single digit numbers(from 0 to 8) separated by space. 0 indicates the unsued space on the board.
#Example input: 1 3 2 4 5 7 6 0 8
#The fill_board() method fills a two dimensional 3x3 array with the user's                                       
#input, from the top left to the bottom right.                                                                                                          
#The idea behind the manhattan() method is to compare the position of every element (except for None)            
#in the solution array (self._original) with the position of every element in the user created array (self._user)

class Board:
	def __init__(self, arr):
		self._arr = arr
		self._user = [[None] * 3 for i in range(3)]
		self._original = [[1, 2, 3], [4, 5, 6],[7, 8, None]]
		self.fill_board()
	
	def fill_board(self):
		index = 0
		for i in range(3):
			for j in range(3):
				self._user[i][j] = self._arr[index]
				index += 1
	
	def manhattan(self):
		for i in range(3):
			for j in range(3):
				if i == 2 and j == 2:
					break
				else:
					for x in range(3):
						for y in range(3):
							if self._original[i][j] == self._user[x][y]:
								print("The shortest distance between %d's current position and where it's supposed to be is %d" % (self._original[i][j], abs(x - i) + abs(y - j)))
								
if __name__ == "__main__":
	array = [int(i) for i in input().split()]
	Board(array).manhattan()
							
