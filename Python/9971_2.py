def decipher(char):
	l = len(char)
	char2 = []
	for i in range(l):
		if 70 <= ord(char[i]) <= 90:
			d = chr(ord(char[i]) - 5)
			char2.append(d)
		elif 65 <= ord(char[i]) <= 69:
			d = chr(ord(char[i]) + 21)
			char2.append(d)
		else:
			char2.append(char[i])
	return char2

start = input()

while start != "ENDOFINPUT":
	char = list(input())
	
	char2 = decipher(char)
	
	print(''.join(map(str, char2)))
	end = input()
	start = input()

