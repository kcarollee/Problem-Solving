#include <stdio.h>
#include <stdbool.h>

bool is_tri(int a, int b, int c)
{
	if (a+b<=c || b+c<=a || c+a <= b){
		return false;
	}
	return true;
}

void determine(int x, int y, int z, int casenum)
{
	if (is_tri(x, y, z)){
		if (x == y && y == z && z == x){
			printf("Case #%d: equilateral", casenum);
		}
		else if((x == y && x != z) || (x == z && x != y) || (z == y && z != x)){
			printf("Case #%d: isosceles", casenum);
		}
		else
			printf("Case #%d: scalene", casenum);
	}
	else
		printf("Case #%d: invalid!", casenum);
}

int main()
{
	int tc, a, b, c;
	scanf("%d", &tc);
	for (int i = 1; i <= tc; i++){
		scanf("%d %d %d", &a, &b, &c);
		determine(a, b, c, i);
	}
	return 0;
}