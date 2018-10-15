num = int(input())
temp =[]
for i in range(num):
	elem = int(input())
	temp.append(elem)
increasing = temp.sorted()
for k in range(len(increasing)):
	print(increasing[k])
