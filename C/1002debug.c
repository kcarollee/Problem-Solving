#include <stdio.h>
#include <math.h>

int main()
{
	int tc, x1, y1, r1, x2, y2, r2;
	scanf("%d", &tc);
	for (int i = 1; i <= tc; i++){
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		float center_distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)), radius_sum = r1 + r2;
		if (center_distance == radius_sum || (pow(r1-r2, 2) == pow(x2-x1, 2) + pow(y2-y1, 2) && (x1 != x2 || y1 != y2 || r1 != r2))){
			printf("1\n");
		}
		else if (center_distance > radius_sum || pow(r1-r2, 2) > pow(x2-x1, 2) + pow(y2-y1, 2)){
			printf("0\n");
		}
		else if (x1 == x2 && y1 == y2 && r1 == r2){
			printf("-1\n");
		}
		else
            printf("2\n");
	}
	return 0;
}
