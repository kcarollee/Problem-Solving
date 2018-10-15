#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}

bool compare(int arr[5], int arr2[5])
{
	for (int i = 0; i <= 4; i++){
		if (arr[i] != arr2[i]){
			return false;
		}
	}
	return true;
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5}, input[5];
	for (int i = 0; i <= 4; i++){
		scanf("%d", &input[i]);
	}
	while (compare(arr, input)){
		for (int k = 0; k < 5; k++){
			if (input[k] > input[k+1]){
				swap(&input[k], &input[k+1]);
				printf("%d %d %d %d %d", input[0], input[1], input[2], input[3], input[4]);
			}
		}
	}
	printf("%d %d %d %d %d", input[0], input[1], input[2], input[3], input[4]);
	return 0;
}