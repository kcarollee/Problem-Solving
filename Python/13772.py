def read(arr):
	x = 0
	l = len(arr)
	for p in range(l):
		if arr[p]=='A'or arr[p]=='D'or arr[p]=='O'or arr[p]=='P'or arr[p]=='Q'or arr[p]=='R':
			x += 1
		elif arr[p] == 'B':
			x += 2
		elif arr[p] == '\0':
			break
	return x

tc = int(input())
for i in range(tc):
	arr = list(input())
	print(read(arr))
	
	