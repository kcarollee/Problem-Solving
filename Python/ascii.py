class WordBox:
	def __init__(self, width, length, height):
		self._x = width
		self._y = length
		self._z = height
		self._cube = [[[0] * self._x for i in range(self._y)] for j in range(self._z)]
		self._hcurrent = 0
		self._lcurrent = 0
		
	def fill(self, string):
		arr = list(string)
		length = len(arr)
		arr_index = 0
		while arr_index != length:
			self._cube[self._hcurrent][self._lcurrent][arr_index] = arr[arr_index]
			arr_index += 1
			

		arr_index = 0
		if self._hcurrent == self._z - 1:
			self._lcurrent += 1
		else:	
			if self._lcurrent < self._y - 1:
				self._lcurrent += 1
			else:
				self._lcurrent = 0
				self._hcurrent += 1
				
	def starting_at(self):
		print([self._hcurrent, self._lcurrent])
		
	def return_box(self):
		for i in range(self._z):
			for j in range(self._y):
				for k in range(self._x):
					print(self._cube[i][j][k], end = ' ')
				print()
			print()
			
	def is_all_filled(self):
		if self._hcurrent == self._z - 1 and self._lcurrent == self._y:
			return True
		else:
			return False
		
		
if __name__ == "__main__":
	width = int(input("Enter width: "))
	length = int(input("Enter length: "))
	height = int(input("Enter height: "))
	box = WordBox(width, length, height)
	while not box.is_all_filled():
		box.fill(input())
		box.return_box()
		box.starting_at()
		
