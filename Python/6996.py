class Anagram:
	def __init__(self, arr1, arr2):
		self._arr1 = arr1
		self._arr2 = arr2
		self._dict1 = {}
		self._dict2 = {}

	def is_anagram(self):
		if len(self._arr1) != len(self._arr2):
			return False
		s1 = list(set(self._arr1))
		s2 = list(set(self._arr2))
		flag = 0
		for i in range(len(s1)):
			for j in range(len(self._arr1)):
				if s1[i] == self._arr1[j]:
					flag += 1
			self._dict1[s1[i]] = flag
			flag = 0
		flag2 = 0
		for k in range(len(s2)):
			for l in range(len(self._arr2)):
				if s2[k] == self._arr2[l]:
					flag2 += 1
			self._dict2[s2[k]] = flag2
			flag2 = 0 
		if self._dict1 == self._dict2:
			return True
		else:
			return False

tc = int(input())
for i in range(tc):
	string1, string2 = map(str, input().split())
	a1 = list(string1)
	a2 = list(string2)
	ans = Anagram(a1, a2)
	if ans.is_anagram():
		print("%s & %s are anagrams." % (string1, string2))
	else:
		print("%s & %s are NOT anagrams." % (string1, string2))











