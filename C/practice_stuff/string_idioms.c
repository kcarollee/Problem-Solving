#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    char *string;
    scanf("%d", &n);
    string = malloc(n * sizeof(char));
    fgets(string);
    for (int i = 0; i < strlen(string); i++){
        printf("%c\n", *(string + i));
    }


    return 0;

}
