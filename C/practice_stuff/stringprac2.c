#include <stdio.h>
#define len 50
//lowercase only
int spacecount(const char *s)
{
    int count = 0;
    for (; *s != '\0'; s++){
        if (*s == ' '){
            count++;
        }
    }
    return count;
}

int wordcount(const char *s)
{
    int count = 0;
    for (; *s != '\0'; s++){
        if (*s != ' '){
            count ++;
        }
    }
    return count;
}

int vowelcount(const char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count ++;
        }
    }
    return count;
}
void ascii (const char *s)
{
    int i = 0;
    for (; *s != '\0'; s++){
        printf("The ascii value for the character at index %d is %d\n", i, *s);
        i++;
    }
}

int main()
{
    char string[len], *pntr;
    pntr = string;
    gets(string);
    printf("string has %d space(s)\n", spacecount(pntr));
    printf("string has %d character(s)\n", wordcount(pntr));
    printf("string has %d vowel(s)\n", vowelcount(pntr));
    ascii(pntr);
    return 0;


}
