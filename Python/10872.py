class Factorial:
	def calc(self, num):
		if num == 0:
			return 1
		if num == 1:
			return 1
		elif num > 1:
			return num * self.calc(num-1)

a = int(input())
b = Factorial()
print(b.calc(a))
