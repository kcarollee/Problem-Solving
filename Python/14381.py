def search(N):
	empt = []
	while N >= 0:
		R = N % 10
		if R not in empt:
			empt.append(R)
		else:
			continue
	 	N /= 10
	return empt
	 
print(search(1692))
