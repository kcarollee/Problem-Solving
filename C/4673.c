#include <stdio.h>
#define SIZE 10000
#include <string.h>
int d(int n)
{
	int  rem, sum;
	sum = n;
	while (n > 0){
		rem = n % 10;
		sum += rem;
		n /= 10;
	}

	return sum;
}

void search(int n, int arr[SIZE])
{
	int i;
	for(i = 0; i < SIZE; i++){
		if (n == arr[i]){
			arr[i] = 0;
			break;
		}
	}
}

int main()
{
	int arr[SIZE], x, y, z;
	for (x = 0; x < SIZE; x++){
		arr[x] = x + 1;
	}

	for (y = 0; y < SIZE; y++){
		search(d(y), arr);
	}

	for (z = 0; z < SIZE; z++){
		if (arr[z] != 0){
			printf("%d\n", arr[z]);
		}
	}

	return 0;
}

