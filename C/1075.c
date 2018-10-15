#include <stdio.h>
int main()
{
    int N, F, G;
    scanf("%d %d", &N, &F);
    int E = N/100;
    int M = 100 * E;
    if (M % F == 0)
        printf("00");

    else if (M % F != 0){
        while (M % F != 0){
            M++;
        }
        printf("%.2d", M % 100);
    }
    return 0;

}
