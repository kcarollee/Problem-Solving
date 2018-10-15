tc = int(input())
c = 100
d = 100
for a in range(tc):
	a, b = map(int, input().split())
	if a > b:
		d -= a
	elif a < b:
		c -= b
	elif a == b:
		continue
print(c)
print(d)

