a = int(input())
num = list(map(int, input().split()))
b = 0
for i in range(len(num)):
	if a == num[i]:
		b +=1
print(b)


