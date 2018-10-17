#include <stdio.h>
#include <string.h>
#define len 50

int main()
{
    char string[len], string2[len], string3[len], *p1, *p2, *p3;
    p1 = string;
    p2 = string2;
    p3 = string3;
    gets(string);
    gets(string2);
    printf("%s\n", p1);
    printf("%s\n", p2);

    strcpy(p1, p2);
    printf("%s\n", p1);
    printf("%s\n", p2);

    printf("The length of the second string is %d\n", strlen(p2));

    gets(string3);

    strcat(p3, p2);
    printf("%s\n", p3);
    printf("%s\n", p2);


}
