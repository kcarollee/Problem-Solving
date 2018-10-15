#include <stdio.h>

int factorial(int a)
{
	int b = 1;
	for (int i = 1; i <= a; i++){
		b *= i;
	}
	return b;
}

int calc(int k)
{
	int x, y, z, ans = 1;
	if (k == 1)
		return 1;
	if (k == 2)
		return 2;
	if (k == 3)
		return 4;
	if (k % 2 == 0)
		ans += 1;

	if (k % 3 == 0)
		ans += 1;

	for (x = 1; x <= k-1; x++){
		for (y = 1; y <= k/2; y++){
			if (k == x + 2*y){
				ans += (factorial(x + y) / (factorial(x) * factorial(y)));

			}
		}
	}
	for (x = 1; x <= k-1; x++){
		for (z = 1; z <= k/3; z++){
			if (k == x + 3*z){
				ans += (factorial(x + z) / (factorial(x) * factorial(z)));

			}
		}
	}
	for (y = 1; y <= k/2; y++){
		for (z = 1; z <= k/3; z++){
			if (k == 2*y + 3*z){
				ans += (factorial(z + y) / (factorial(z) * factorial(y)));

			}
		}
	}
	for (x = 1; x <= k-1; x++){
		for (y = 1; y <= k/2; y++){
			for(z = 1; z <= k/3; z++){
				if (k == x + 2*y + 3*z){
					ans += (factorial(x + y + z) / (factorial(x) * factorial(y) * factorial(z)));

				}
			}
		}
	}

	return ans;
}

int main()
{
	int tc, k;
	scanf("%d", &tc);
	for (int i = 1; i <= tc; i++){
		scanf("%d", &k);
		printf("%d\n", calc(k));
	}
	return 0;
}
