def gen(size):
	for i in range(size):
		yield i

arr = gen(5)
print(next(arr))
print(arr)
for i in arr:
	print(i)
