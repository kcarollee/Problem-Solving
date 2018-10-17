#include <stdio.h>
#include <string.h>

char *slice(const char *a, int start, int last)
{
	char temp[last - start + 1];
	int index = 0;
	for (int i = start; i < last; i++){
		temp[index] = *(a + i);
		index++;
	}
	return *temp;
}


int main()
{
    char array[10], *ptr, array2[10];


    ptr= array;
    gets(ptr);
    puts(array);

    printf("%s", slice(array, 2, 4));
}
