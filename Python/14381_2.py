def search(N):
	empt = []
	empt.append(N % 10)
	while N >= 0:
		R = N % 10
		N /= 10
		if R not in empt:
			empt.append(R)
		else:
			continue
	 	
	return empt
	 


print(search(10))
