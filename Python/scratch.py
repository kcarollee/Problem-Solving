class Base:
	def __init__(self, num):
		self._basenum = num
		

class Child(Base):

	def __init__(self, num_1):
		super.__init__(num_1)
		self.num1 = num_1
	
	def ShowChildNum(self):
		print(self.num1)
	
	def ShowBaseNum(self):
		print(self._basenum)
		
instance = Child(1)
instance.ShowBaseNum()
instance.ShowChildNum()
	
