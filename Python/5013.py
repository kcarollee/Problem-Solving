class Battles:
	def __init__(self, battles, *args):
		self.args = args
		self.battles = battles
		self.won = 0
	
	def proper(self, arr):
		for i in range(len(arr) - 1):
			if arr[i] == 'C' and arr[i + 1] == 'D':
				return False
		return True
	
	def battles_won(self):
		for arr in self.args:
			if self.proper(list(arr)):
				self.won += 1
		return self.won
		
if __name__ == "__main__":
	num = int(input())
	args = []
	for i in range(num):
		string = input()
		args.append(string)
	print(Battles(num, *args).battles_won())
		
		
