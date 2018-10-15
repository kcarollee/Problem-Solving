def oneup(arr):
	for i in range(0, 49):
		if arr[i] == '\0':
			break
		else:
			ord(arr[i]) += 1
	print(arr)
	
list_1 = list(input())
oneup(list_1)	
