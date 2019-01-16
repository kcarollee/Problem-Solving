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
		self.direction = 1
	
	def done(self):
		return self.moved == self.sec
	
	def move(self):
		while True:
			if self.direction == 1:
				for i in range(self.y_inc):
					self.pos.y += 1
					self.moved += 1
					if self.done():
						return 
				for j in range(self.x_inc):
					self.pos.x += 1
					self.moved += 1
					if self.done():
						return 
				self.direction *= -1
				self.y_inc += 1
				self.x_inc += 1
			else:
				for i in range(self.y_inc):
					self.pos.y -= 1
					self.moved += 1
					if self.done():
						return 
				for j in range(self.x_inc):
					self.pos.x -= 1
					self.moved += 1
					if self.done():
						return 
				self.direction *= -1
				self.y_inc += 1
				self.x_inc += 1
	
	def ViewPos(self):
		if self.sec == 0:
			print(0, 0)
		else:
			self.move()
			print(self.pos.x, self.pos.y)

if __name__ == "__main__":
	
	sec = int(input())
	Snail(sec).ViewPos()
			
