def calc(s1, s2, s3):
	empt = []
	for a in range(1, s1 + 1):
		for b in range(1, s2 + 1):
			for c in range(1, s3 + 1):
				empt.append(a + b + c)

	return empt

def most(arr):
	a = len(arr)
	c = sorted(arr)
	d = {}
	empt = []
	b = 0
	for x in range(1, a):
		if c[x] == c[x - 1]:
			b += 1
		else:
			d[c[x - 1]] = b
			b = 0
	max_value = max(list(d.values()))
	empt2 = []
	for k, v in d.items():
		if v == max_value:
			empt2.append(k)
	min_key = min(empt2)
	return min_key
	
a, b, c = map(int, input().split())
d = calc(a, b, c)
print(most(d))







