#include <stdio.h>

int main()
{
	int t, price, options, q, p;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		scanf("%d", &price);
		scanf("%d", &options);
		if (options == 0){
			printf("%d\n", price);
		}
        else {
            for (int j = 1; j <= options; j++){
                scanf("%d %d", &q, &p);
                price += q*p;
            }
            printf("%d\n", price);
        }
	}

	return 0;
}
