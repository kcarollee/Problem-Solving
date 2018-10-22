#include <stdio.h>
#include <string.h>
/*
char slice(char *a, int start, int last)
{
	char temp[last - start + 2];
	int index = 0;
	for (int i = start; i <= last; i++){
		temp[index] = *(a + i);
		index++;
	}
	return temp;
}


int main()
{
    char array[10], *ptr, array2[10];


    ptr= array;
    gets(ptr);
    puts(array);

    printf("%s", slice(array, 0, 4));
}
*/
#include <stdio.h>
#include <string.h>

void slice(char *a, int start, int last)
{
	char temp[last - start + 2];
	int index = 0;
	for (int i = start; i <= last; i++){
		temp[index] = *(a + i);
		index++;
	}
	printf("%s\n", temp);
}


int main()
{
    char array[10], *ptr, array2[10];


    ptr= array;
    gets(ptr);
    puts(array);

    slice(array, 2, 4);
    puts(array);

    return 0;

}
