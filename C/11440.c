#include <stdio.h>
#include <stdio.h>
long unsigned int fibo(long unsigned int n)
{
	long unsigned int x = 0, y = 1, t = 1, z, a;


	if (n == 0){
        return 0;
	}
	else if (n == 1){
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
    long unsigned int sum = 0;
    long unsigned int n;
    scanf("ld", &n);
    for (long unsigned int i = 0; i <= n; i++){
        printf("%d", fibo(i));
        sum += fibo(i) * fibo(i);
    }
    printf("%d", sum);
    if (sum < 1000000007){
        printf("%d",sum);
    }
    else
        printf("%ld", sum % 1000000007);
    return 0;
}

