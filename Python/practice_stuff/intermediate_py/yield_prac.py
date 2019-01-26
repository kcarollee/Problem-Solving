def test_1():
	for i in range(1, 10):
		if i % 2 == 0:
			yield i

gen = test_1()
print(gen)
for i in gen:
	print(i)

for i in gen:
	print(i)