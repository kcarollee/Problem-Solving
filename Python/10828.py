def push(arr, x):
	arr.append(x)

def pop(arr):
	if empty(arr) == 1:
		print(-1)
	elif empty(arr) == 0:
		b = arr.pop()
		print(b)

def size(arr):
	return len(arr)

def empty(arr):
	if size(arr) == 0:
		return 1
	elif size(arr) != 0:
		return 0

def top(arr):
	if empty(arr) == 1:
		return -1
	elif empty(arr) == 0:
		return arr[-1]`

tc = int(input())
empt = []
for i in range(tc):
	command = input().split(' ')
	if command[0] == 'push':
		push(empt, command[1])
		
	elif command[0] == 'pop':
		pop(empt)
		
	elif command[0] == 'size':
		print(size(empt))
	
	elif command[0] == 'empty':
		print(empty(empt))
		
	elif command[0] == 'top':
		print(top(empt))
		
	

	
