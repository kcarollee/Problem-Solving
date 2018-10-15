#include <stdio.h>
#include <stdlib.h>

int maximum(int *arr, int size)
{
    int max = *arr;
    for (int i = 1; i < size; i++){
        if (*(arr + i) > max){
            max = *(arr + i);
        }
    }
    return max;
}

void sort_array(int *arr2, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++){
        for (j = 0; j < size - 1 - i; j++){
            if (*(arr2 + j) > *(arr2 + j + 1)){
                temp = *(arr2 + j + 1);
                *(arr2 +j + 1) = *(arr2 + j);
                *(arr2 + j) = temp;
            }
        }
    }
}

int main()
{
    int *array;
    int i = 0;
    array = calloc(14, sizeof(int));
    while (scanf("%d", (array + i)) != '\n'){
        scanf("%d", (array + i));
        i++;
    }
    sort_array(array, i);


}



