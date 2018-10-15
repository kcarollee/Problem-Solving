#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	if (x % 2 == 1)
		printf("SK");
	else if (x % 2 == 0)
		printf("CY");
	return 0;
}