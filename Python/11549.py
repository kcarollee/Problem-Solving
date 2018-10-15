a = int(input())
x, y, z, q, r = map(int, input().split())
ans = 0
if a == x:
	ans += 1
elif a == y:
	ans += 1
elif a == z:
	ans += 1
elif a == q:
	ans += 1
elif a == r:
	ans += 1
print(ans) 