#include <stdio.h>
int main()
{
	int P, tc, M, N;
	int arr[P][2];
	scanf("%d", &P);
	for (int tc = 0; tc < P; tc++){
		scanf("%d %d", &N, &M);
		arr[tc][0] = 2*M-N;
		arr[tc][1] = N-M;
	}
	for (int tc = 0; tc < P; tc++){
		printf("%d %d\n", arr[tc][0], arr[tc][1]);
	}
	return 0;
}


