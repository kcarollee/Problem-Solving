#include <stdio.h>

int determine(int a, int b, int c)
{
	int rep;
	if (a + b <= c){
		return a + b + a + b - 1;
		}
	else if (a + c <= b){
		return a + c + a + c -1;
	}
	else if (c + b <= a){
		return c + b + c + b - 1;
	}
	else
		return a + b + c;
}

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", determine(x, y, z));
	return 0;
}