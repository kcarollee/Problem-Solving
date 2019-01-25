class First:
	def __init__(self, a, b):
		self.a = a
		self.b = b
	
	def UnprotectedFunc(self):
		print(self.a + self.b)
		
	
	def _ProtectedFunc(self):
		print(self.a + self.b)


