#include <stdio.h>

int main()
{
    int n, d1, d2;
    scanf("%d", &n);
    d1 = n / 5;
    if (n == 4 || n == 7){
        printf("-1");
        return 0;
    }
    while ((n - 5 * d1) % 3 != 0){
        d1--;
    }
    n -= 5 * d1;
    d2 = n / 3;
    printf("%d", d1 + d2);
    return 0;
}
