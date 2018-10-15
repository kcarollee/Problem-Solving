#include <stdio.h>
int main()
{
	int N, P;
	scanf("%d %d", &N, &P);
	while (N != 0){
		if (P > N/2){
			if(P%2 == 0){
				printf("%d %d %d\n", N+1-P, N+2-P, P-1);
			}
			else if(P%2 == 1){
				printf("%d %d %d\n", N-P, N-P+1, P+1);
			}
		}	
		else if (P <= N/2){
			if (P%2 == 0){
				printf("%d %d %d\n", P-1, N+1-P, N+2-P);
			}
			else if(P%2 == 1){
				printf("%d %d %d\n", P, N-P, N-P+1);
			}
		}
		scanf("%d %d", &N, &P);
	}
	return 0;
}