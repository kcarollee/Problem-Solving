def switch(arr, a, b):
	arr[a], arr[b] = arr[b], arr[a]

a = int(input())
arr = [1, 2, 3]
for i in range(a):
	a, b = map(int, input().split())
	switch(arr, a-1, b-1)
print(arr[0])

