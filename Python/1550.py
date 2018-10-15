def convert(arr):
	l = len(arr)
	num = 0
	for i in range(0, l):
		if 48 <= ord(arr[i]) <= 57:
			num += int(arr[i]) * (16 ** (l - i - 1))
		elif 65 <= ord(arr[i]) <= 70:
			num += (ord(arr[i]) - 55) * (16 ** (l - i - 1))
	return num

a = list(input())
print(convert(a))
