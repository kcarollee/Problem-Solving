#include <stdio.h>
#include <math.h>

int digit(int n)
{
	int x;
	x = n;
	while (x > 0){
		x /= 10;
		x += 1;
	}
	return x;
}

int construct(int num, int digits){
	int flag = 0, ans = 0;
	while (flag < digits){
		ans += (num % 10) * (pow(10, flag));
		flag += 1;
	}
	return ans;
}

int main()
{
	int tc, i, k, a, square;
	scanf("%d", &tc);
	for (i = 1; i <= tc; i++){
		scanf("%d", &k);
		square = k * k;
		if ((construct(square, digit(k))) == k){
			printf("YES");
		}
		else
			printf("NO");
	}

	return 0;
}