#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_stairnum(int digits, int num)
{
	for (int i = 1; i <= digits - 1; i++){
		if ((num / 10) - (num % 10)/10 != 1)
			return false;
		num = num - (num/pow(10, digits - i)) * pow(10, digits - i);
	}
	return true;
}

int main()
{
	int n, total = 0;
	scanf("%d", &n);
	for (int i = pow(10, n - 1); i < pow(10, n); i++){
		if (is_stairnum(n, i))
			total += 1;
	}
	printf("%d", total);
}
