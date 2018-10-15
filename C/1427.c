#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_length(unsigned long num)
{
	int length = 0;
	while (num > 0){
		length += 1;
		num /= 10;
	}
	return length;
}

void fill_array(unsigned long *array, unsigned long number, int size)
{
	for (int i = 0; i < size; i++){
		*(array + i) = number / ((unsigned long) pow(10, size-1-i));
		number -= (number/((unsigned long)pow(10,size-1-i)))*(unsigned long)pow(10,size-1-i))
	}
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

unsigned long *descending (unsigned long *array, int size)
{
	unsigned long *temp;
	*temp = malloc(size * sizeof(unsigned long));
	for (int i = 0; i < size; i++){
		*(temp + i) = *(array + size - 1 - i);
	}
	return temp;
}

int main()
{
	unsigned long number;
	unsigned long *arr;
	int length;
	scanf("%d", &number);
	length = find_length(number);
	arr = malloc(length * sizeof(unsigned long));
	fill_array(arr, number, length);
	qsort(arr, length, sizeof(unsigned long), cmpfunc);
	for (int j = 0; j < size; j++){
		printf("%ul", *(descending(arr, length) + j));
	}
	return 0;
}