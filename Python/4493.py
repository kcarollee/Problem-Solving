def results(tc):
	p_1 = 0
	p_2 = 0
	for x in range(0, tc):
		a, b = map(str, input().split())	
		if a == 'R' and b == 'P':
			p_2 += 1
		elif a == 'P' and b == 'R':
			p_1 += 1
		elif a == 'S' and b == 'R':
			p_2 += 1
		elif a == 'R' and b == 'S':
			p_1 += 1
		elif a == 'P' and b == 'S':
			p_2 += 1
		elif a == 'S' and b == 'P':
			p_1 += 1
		elif a == b:
			continue
	if p_1 > p_2:
		print("Player 1")
	elif p_2 > p_1:
		print("Player 2")
	elif p_2 == p_1:
		print("TIE")
total_games = int(input())
for x in range(0, total_games):
	tc = int(input())
	results(tc)
	
	
	
		
		
