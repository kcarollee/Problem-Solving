x, _, y = (1, 2, 3)
print(x, y)
x , *_, y = (1, 2, 3, 4, 5)
print(x, y)

#Single trailling underscores are used to avoid conflicts with keywords
class List:
	def __init__(self):
		self.a = 1
list_ = List()

#Double leading underscores

#Double leading and trailing underscores

class Test:
	def __init__(self, a, b):
		self.a = a
		self.b = b
	
	#operator overloading
	def __eq__(self, other): #in this case, other refers to a different Test instance
		return self.a == other.a
	
	def __add__(self, other): #same as above
		x = self.a + self.b
		y = other.a + other.b
		return x + y
	
	def __sub__(self, other):
		x = self.a + self.b
		y = other.a + other.b
		return x - y
	#__mul__(self, other) -> *
	#__mod__(self, other) -> %
	#__truediv__(self, other) -> /
	#__lt__(self, other) -> <
	#__le__(self, other) -> <=
	#__ne__(self, other) -> !=
	#__gt__(self, other) -> >
	#__ge__(self, other) -> >=
	
	def __getitem__(self, index):
		#overriding index
		l = [self.a, self.b]
		if index > 1:
			print("Index is too large")
		elif index == 1:
			return self.a
		elif index == 0:
			return self.b
	#__contains__(self, other) -> in
	#__len__(self) -> len
	#__str__(self) -> str

print(Test(1, 2) == Test(1, 3)) #prints 'False' is __eq__ is not defined.
print(Test(1, 2) + Test(1, 3))
print(Test(1, 3) - Test(1, 2))
print(Test(1, 4)[3])
print(Test(1, 4)[0])
print(Test(1, 4)[1])

		
