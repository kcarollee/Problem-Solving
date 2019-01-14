class Snail:
	class Position:
		def __init__(self, x, y):
			self.x = x
			self. y = y
	def __init__(self, seconds):
		self.sec = seconds
		self.pos = self.Position(0, 0)
		self.x_inc = 1
		self.y_inc = 1
		self.moved = 0
	
	def move(self):
		self.sec = 0 
