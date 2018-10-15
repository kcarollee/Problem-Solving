class Palindrome:
	def __init__(self, arr):
		self._arr = arr
		self._length = len(arr)

	def is_not_palindrome(self, arr1):
		if arr1 != arr1[::-1]:
			return True 
		return False

	def index_thru(self):
		if len(set(self._arr)) == 1:
			return -1
		for j in reversed(range(2, self._length + 1)):
			for k in reversed(range(0, self._length - j + 1)):
				if is_not_palindrome(self._arr[k: k+j]):
					return j

a = list(input())
cc = Palindrome(a)
print(cc.index_thru())