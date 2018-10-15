#include <stdio.h>

int main()
{
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);
    if (a < b){
        printf("%llu\n", b - a - 1);
        for (unsigned long long i = a + 1 ; i < b; i++){
            printf("%llu ", i);
        }
    }
    else if (a > b){
        printf("%llu\n", a - b - 1);
        for (unsigned long long j = b + 1; j < a; j++){
            printf("%llu ", j);
        }
    }
    else if (a == b){
        printf("0\n");
        return 0;
    }
    return 0;
}

