class Decrypt:
	def __init__(self, arr):
		self._arr = arr

	def decrypt(self):
		for i in reversed(range(len(self._arr))):
			print(self._arr[i], end = '')

if __name__ == "__main__":
	string = input()
	while string != 'END':
		Decrypt(list(string)).decrypt()
		print()
		string = input()