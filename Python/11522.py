class Calc:
	def __init__(self, n):
		self.until = n
		self.sum1 = 0

		self.Answer()
		
	def Answer(self):

		self.sum1 = sum(range(1, self.until + 1))
	
	def Show(self):
		print("%d %d %d" % (self.sum1, self.sum1 * 2 - self.until, self.sum1 * 2))

def main():
	test_case = int(input())
	for i in range(test_case):
		set_number, N = map(int, input().split(' '))
		data = Calc(N)
		print(set_number, end = ' ')
		data.Show()

if __name__ == "__main__":
	main()
		
		

