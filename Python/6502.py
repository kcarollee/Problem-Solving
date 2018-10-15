r, w, l = map(int, input().split())
tc = 1
while r != 0:
	if (2 * r)**2 >= w**2 + l**2:
		print("Pizza %d fits on the table." % (tc))
	else:
		print("Pizza %d does not fit on the table." % (tc))
	tc += 1
	r, w, l = map(int, input().split())

	