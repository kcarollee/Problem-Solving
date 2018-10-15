#include <stdio.h>
#include <math.h>

int main()
{
	int r, w, l, tc = 1;
	scanf("%d %d %d", &r, &w, &l);
	while (r != 0){
		if (pow(2*r, 2) >= pow(w, 2) + pow(l, 2)){
			printf("Pizza %d fits on the table.\n", tc);
		}
		else
			printf("Pizza %d does not fit on the table.\n", tc);
		tc += 1;
		scanf("%d %d %d", &r, &w, &l);
	}
	return 0;
}