#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000000

void copy(long long int *a, long long int *b)
{
    for (int i = 0; i < 9; i++){
        *(a + i) = *(b + i);
    }
}

void next_arr(long long int *arr, long long int *tmp)
{
    for (int i = 0; i < 9; i++){
        if (i == 0){
            *(tmp + 1) += *(arr) % MOD;
        }
        else if (0 < i && i < 8){
            *(tmp + i - 1) += *(arr + i) % MOD;
            *(tmp + i + 1) += *(arr + i) % MOD;
        }
        else if (i == 8){
            *(tmp + 7) += *(arr + 8) % MOD;
        }
    }
    copy(arr, tmp);
}

long long int sum(long long int *arrr)
{
    long long int sum = 0;
    for (int j = 0; j < 9; j++){
        sum += *(arrr + j);
    }
    return sum;

}

int main()
{
    long long int digits[9] = {2, 2, 2, 2, 2, 2, 2, 2, 1};
    long long int *temp;
    long long int temp_odd = 1, temp_even = 2;
    temp = calloc(9, sizeof(long long int));
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("9");
    else if (n == 2)
        printf("17");
    else if (n >= 3){
        for (int k = 3; k <= n; k++){
            next_arr(digits, temp);
            if (k % 2 == 1){
                    digits[0] += temp_odd;
                    temp_odd = digits[0];
            }
            else if (k % 2 == 0){
                    digits[0] += temp_even;
                    temp_even = digits[0];
            }
            temp = calloc(9, sizeof(long long int));
        }
        printf("%lld", sum(digits)% MOD);
    }
    return 0;
}

