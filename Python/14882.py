class Polynomial:
	def __init__(self,deg, var_num *args1, *args2):
		self.arr1 = args1
		self.arr2 = args2
		self.deg = deg
		self.var_num = var_num
	
	def calc(self, var):
		ans = 0
		for i in range(len(self.arr1) + 1):
			ans += self.arr1[i] * (var ** (i))
			
		
		
