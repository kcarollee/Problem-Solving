#include <stdio.h>

int main()
{
	int N, M, a;
	scanf("%d", &N);
	for (M = 1; M < N ; M++){
		if (3 * M * M - 9 * M + 8 <= N && N <= 3 * M * M - 3 * M + 1){
			printf("%d", M);
		}
	}  
	
	return 0;
}
