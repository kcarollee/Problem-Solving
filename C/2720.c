#include <stdio.h>
void change(int N)
{
	int r_1, r_2, r_3;
	r_1 = N % 25;
	r_2 = r_1 % 10;
	r_3 = r_2 % 5;
	printf("%d %d %d %d\n", N/25, r_1/10, r_2/5,r_3);
}

int main()
{
	int T, C;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		scanf("%d", &C);
		change(C);
	}

	return 0;
}
