#include <stdio.h>
#include <stdlib.h>

int findKing(int len, int *arr)
{
    int ans;
    for (int i = 1; i < len - 1; i++){
        if (*(arr + i) != *(arr + i - 1) + 1){
            ans = i + 1;
            break;
        }
    }
    return ans;
}

int main()
{
    int test_case, g, ans;
    int *arr;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++){
        scanf("%d", &g);
        arr = malloc(g * sizeof(int));
        for (int j = 0; j < g; j++){
            scanf("%d", arr + j);
        }
        printf("%d\n", findKing(g, arr));
    }

    return 0;
}
