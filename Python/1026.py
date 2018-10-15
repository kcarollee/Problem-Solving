class Ans:
	def __init__(self, arr1, arr2, tc):
		self._tc = tc		
		self._arr1 = arr1
		self._arr2 = arr2
		self._sum = 0

	def summation(self):
		s1 = sorted(self._arr1)
		s2 = list(reversed(sorted(self._arr2)))
		for i in range(self._tc):
			self._sum +=int(s1[i]) * int(s2[i])
		print(self._sum)
tc = int(input())
arr1 = list(int(i) for i in input().split())
arr2 = list(int(i) for i in input().split())
cc = Ans(arr1, arr2, tc)
cc.summation()



