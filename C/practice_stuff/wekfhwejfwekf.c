#include <stdio.h>
#include <stdbool.h>

char *test(int a)
{
    if (a > 5)
        return "True";
    return "False";
}

int main()
{
    int x;
    scanf("%d", &x);
    if (test(x) == "True"){
        printf("%d is larger than 5", x);
        return 0;
    }
    else
        printf("%d is less than or equal to 5", x);
    return 0;
}
