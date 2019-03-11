class WGCProblem:
	def __init__(self):
		self.left = []
		self.right = ['wolf', 'goat', 'cabbage']
	
	#moving element from arr2 to arr1	
	def move (self, arr1, arr2, elem):
		temp = None
		for i in range(len(arr2)):
			if arr2[i] == elem:
				temp = arr2[i]
		arr2.remove(temp)
		arr1.append(temp)
		temp = None
	
	def acceptable(self):
		if set(self.left) == {'cabbage', 'goat'} or\
		set(self.left) == {'goat', 'wolf'} or\
		set(self.right) == {'cabbage', 'goat'} or\
		set(self.right) == {'goat', 'wolf'}:
			return False
		else:
			return True
				
			
			
	def execute(self):
		while set(self.left) != {'cabbage', 'goat', 'wolf'}:
			if self.acceptable():
				
			
	
			
