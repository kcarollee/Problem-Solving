#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_stairnum(int *array, int size)
{
	for (int i = 0; i < size - 1; i++){
		if ((*(array + i) - *(array + i + 1)) != 1){
            if ((*(array + i) - *(array + i + 1)) != -1)
                return false;
            }
	}
	return true;
}

void fill_array(int *array, int size, int num)
{
	for (int j = 0; j < size; j++){
		*(array + j) = num / (int) round(pow(10, size - 1 - j));
		num = num - (num/(int) round(pow(10, size - 1 - j)) * (int) round(pow(10, size - 1 - j)));
	}
}

int main()
{
	int n, total = 0;
	int *arr;
	scanf("%d", &n);
	for (int i = floor(pow(10, n - 1) + .5); i < floor(pow(10, n) + .5); i++){
		printf("[%d] ", i);
		arr = calloc(n, sizeof(int));
		fill_array(arr, n, i);
		for (int c = 0; c < n; c++){
            printf("%d ", *(arr + c));
		}
		if (is_stairnum(arr, n))
			total += 1;
        printf("%d", total);
		free(arr);
		printf("\n");
	}
	printf("%d", total);
	return 0;
}
