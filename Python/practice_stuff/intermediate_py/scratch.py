import math

class Matrix:
	
	def __init__(self, *args):
		self.arr = args
		self.sq = math.sqrt(len(self.arr))
		self.matrix = [[0] * self.sq for i in range(self.sq)]
		
	def MakeMatrix(self):
		index = 0
		for i in range(self.sq):
			for j in range
