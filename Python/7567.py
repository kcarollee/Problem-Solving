a = list(input())
base = 0
l = len(a)
for i in range(1, l):
	if a[i] == a[i-1]:
		base += 5
	elif a[i] != a[i-1]:
		base += 10
print(base)
