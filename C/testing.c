#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void sort_string(char string[])
{
    int n = strlen(string);
    char temp;

    for (int i = 0; i < n-1; i++) {
       for (int j = i+1; j < n; j++) {
          if (string[i] > string[j]) {
             temp = string[i];
             string[i] = string[j];
             string[j] = temp;
         }
      }
   }
}

int main()
{
    char *g;
    int s, count = 0;
    scanf("%d", &s);
    g = malloc (s * sizeof(char));
    scanf("%s", g);
    int length = strlen(g);
    for (int p = 0; p < length; p++){
        if (*(g + p) == 65)
            count++;
    }

    printf("%d %d\n", count, length);
    sort_string(g);
    printf("%s", g);

    return 0;

}
