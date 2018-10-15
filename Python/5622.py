a = input()
b = list(a)
def calc(b):
	l = len(b)
	s = 0
	for x in range(0, l):
		if 65 <= ord(b[x]) <= 67:
			s += 3
		elif 68 <= ord(b[x]) <= 70:
			s += 4
		elif 71 <= ord(b[x]) <= 73:
			s += 5
		elif 74 <= ord(b[x]) <= 76:
			s += 6
		elif 77 <= ord(b[x]) <= 79:
			s += 7
		elif 80 <= ord(b[x]) <= 83:
			s += 8
		elif 84 <= ord(b[x]) <= 86:
			s += 9
		elif 87 <= ord(b[x]) <= 90:
			s += 10
	return s
	


print(calc(b))
