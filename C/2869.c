#include <stdio.h>

int main()
{
    int a, b, v, current = 0, days = 1;
    scanf("%d %d %d", &a, &b, &v);
    for(;;){
        current += a;
        if (current >= v)
            break;
        current -= b;
        days +=  1;
    }
    printf("%d", days);
    return 0;
}
