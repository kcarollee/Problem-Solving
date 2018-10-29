#include <stdio.h>
#include <stdbool.h>

int deconst (int m)
{
    int d_num = m;
    while (m > 0){
        d_num += m % 10;
        m = (m - (m % 10)) / 10;
    }
    return d_num;
}

bool is_generator(int m, int n)
{
    if (n == deconst(m))
        return true;
    return false;
}

int main()
{
    int d, min, flag = 0;
    scanf("%d",&d);
    for (int i = 0; i < d; i++){
        if (is_generator(i, d)){
            min = i;
            flag += 1;
            break;
        }
    }
    if (flag == 0)
        printf("0");
    else
        printf("%d", min);
    return 0;
}
