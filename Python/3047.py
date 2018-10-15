x, y, z = map(int, input().split())
s = sorted([x, y, z])
a = s[0]
b = s[1]
c = s[2]
string = input()
l2 = list(string)
s2 = sorted(l2)
dictionary  = {}
for i in range(3):
	dictionary.update({s2[i] : s[i]})

for k, v in dictionary.items():
	if l2[0] == k:
		p = v
	if l2[1] == k:
		q = v
	if l2[2] == k:
		r = v
print(p, q, r)





