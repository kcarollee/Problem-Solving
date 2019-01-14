class Testing:
	DEFAULT = 100
	def __init__(self, num1, num2):
		self.a = num1
		self.b = num2

	def Mult(self):
		print("First Number Multiplied by DEFAULT: ", end = '')
		print(self.DEFAULT * self.a)

	def Add(self):
		print("Sum of two given parameters: ", end = '')
		print(self.a + self.b)

if __name__ == "__main__":
	vect = Testing(10, 20)
	vect.Mult()
	vect.Add()
