def len_cmp(arr1, arr2):
	if len (arr1) == len (arr2):
		return 1
	else:
		return 0

def compare(arr1, arr2):
	set1 = set(arr1)
	set2 = set(arr2)
	if set1 != set2:
		return 0
	list_set1 = list(set1)
	list_set2 = list(set2)
	dict_1 = {}
	dict_2 = {}
	l = len(set1)
	l2 = len(arr1)
	for h in range(l):
		dict_1[list_set1[h]] = 0
		dict_2[list_set2[h]] = 0
	
	else:
		num = 0
		for i in range(l):
			for j in range(l2):
				if list_set1[i] == arr1[j]:
					dict_1[list_set1[i]] += 1
				else:
					continue
		for i in range(l):
			for j in range(l2):
				if list_set2[i] == arr2[j]:
					dict_2[list_set2[i]] += 1

		flag = 0
		for k, v in dict_1.items():
			for x, y in dict_2.items():
				if (k, v) == (x, y):
					flag += 1
				else:
					continue
		if flag == len(dict_1):
			return 1
		else:
			return 0

arr1 = list(input())
arr2 = list(input())
case = 1
while arr1 != list("END") and arr2 != list("END"):
	if len_cmp(arr1, arr2) == 0:
		print("Case " + str(case) +  ": different")
	else:
		if compare(arr1, arr2) == 0:
			print("Case " + str(case) +  ": different")
		else:
			print("Case " + str(case) + ": same")

	arr1 = list(input())
	arr2 = list(input())
	case += 1


	



			




