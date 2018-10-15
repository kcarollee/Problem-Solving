#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int *arr[m];
    for (int i = 0; i < m; i++){
        arr[i] = malloc(n * sizeof(int));
    }
    for (int k = 0; k < m; k++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[k][j]);
        }
    }
    for (int k = 0; k < m; k++){
        for (int j = 0; j < n; j++){
            printf("%d", arr[k][j]);
        }
    }
}
