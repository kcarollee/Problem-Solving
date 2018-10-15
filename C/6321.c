#include <stdio.h>
#include <string.h>
const char * oneup(char);

int main()
{
    int t;
    char arr_1[50], arr_2[50];
    gets(arr_1);
    strcpy(arr_2, oneup(arr_1));
    for (int i = 0; i != '\0'; i++){
        printf("%c", arr_2[i]);
    }
    return 0;

}

const char * oneup(char arr[50])
{
    for (int i = 0; i != '\0'; i++){
        arr[i] = arr[i] + 1;
    }
    return arr;
}
