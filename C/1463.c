#include <stdio.h>

int main()
{
	long N;
	int count = 0;
	scanf("%ld", &N);
	while (N > 1){
		if (N % 3 != 0){
			if (N % 2 !=0){
				N -= 1;
				count += 1;
			}
			else if (N % 2 == 0){
				N /= 2;
				count += 1;
			}

		else if (N % 3 ==0){
			N /= 3;
			count += 1;
		}
		}
	}

	printf("%d", N);

	return 0;
}
