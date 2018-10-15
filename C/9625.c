#include <stdio.h>

int fibo(int n)
{
	int x = 0, y = 1, z, a;


	if (n == 1){
		return 1;
	}
	else{

		for(a =0; a < n - 1; a++){

			z = x + y;
			x = y;
			y = z;
			}

		return z;
		}
}

int main()
{
	int k, a, b;
	scanf("%d", &k);
	if (k==1)
		printf("0 1");
	else if(k==2)
		printf("1 1");
	else
		printf("%d %d", fibo(k-1), fibo(k));
	return 0;
}
