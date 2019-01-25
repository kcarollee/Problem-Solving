class PerfectNum:
	def __init__(self, num):
		self._num = num
		self._div = []
		self.find_divisors()
		
	def find_divisors(self):
		for i in range(1, self._num // 2 + 1):
			if self._num % i == 0:
				self._div.append(i)
	
	def is_perfect(self):
		ans = 0
		for i in range(len(self._div)):
			ans += self._div[i]
		if ans == self._num:
			return True
		else:
			return False
	
	def answer(self):
		l = len(self._div)
		if self.is_perfect():
			print("%d = " % (self._num), end = '')
			for i in range(l):
				if i == l - 1:
					print("%d" % (self._div[i]))
				else:
					print("%d + " % (self._div[i]), end = '')
		else:
			print("%d is NOT perfect." % (self._num))

if __name__ == "__main__":
	arg = int(input())
	while arg != -1:
		PerfectNum(arg).answer()
		arg = int(input())
			
			
