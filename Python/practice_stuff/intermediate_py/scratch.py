class Test:
	def __init__(self, a, b, c):
		self.a = a
		self._b = b
		self.__c = c
	
	def show(self):
		print(self.a)
		print(self._b)
		print(self.__c)

t = Test(1, 2, 3)
print(dir(t))
t.show()
