#include <stdio.h>
#include <string.h>
int length(const char *s)
{
    int length = 0;
    for (; (*s != ' ') && (*s != '/0'); s++){
        length++;
    }
    return length;
}

int main()
{
    char *p;
    char string[] = "Karl Lee", *spntr;
    char string2[100], *spntr2;
    p = "First Sentence";
    printf("%s\n", p);
    printf("%s\n", p + 1);
    printf("%s\n", string);
    printf("%s\n", string + 1);
    spntr = string;
    printf("%s\n", spntr);
    printf("%s\n", spntr + 2);
    puts(spntr);
    puts(p);
    puts(string);
    gets(string2);
    spntr2 = string2;
    puts(string2);
    printf("The number of character in string2 is %d", length(string2));
    return 0;
}
