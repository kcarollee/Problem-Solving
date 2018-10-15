def process(arr):
	l = len(arr)
	empt = []
	for i in range(0, l):
		if (65 <= ord(arr[i]) <= 90):
			empt.append(ord(arr[i])+32)
		elif (97 <= ord(arr[i]) <= 122):
			empt.append(ord(arr[i]))
			
	sett = set(empt)
	l = len(sett)		
	return l
	
arr = list(input())
while arr[0] != '#':
	x = process(arr)
	print(x)
	arr = list(input())		



