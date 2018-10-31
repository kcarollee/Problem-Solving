#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct char_num {
    int number;
};

struct char_num character_data(char arr[])
{
    struct char_num char_data[26];
    for (int p = 0; p < 26; p++){
        char_data[p].number = 0;
    }
    for (int i = 0; i < length; i++){
        for (int j = 0; j < 26; j++){
            if (array[i] == 65 + j){
                char_data[j].number += 1;
            }
        }
    }
}
bool is_possible(char array[], int length)
{
    int odd_flag = 0;
    struct char_num char_data[26];
    for (int p = 0; p < 26; p++){
        char_data[p].number = 0;
    }
    for (int i = 0; i < length; i++){
        for (int j = 0; j < 26; j++){
            if (array[i] == 65 + j){
                char_data[j].number += 1;
            }
        }
    }
    for (int k = 0; k < 26; k++){
        if (char_data[k].number % 2 == 1)
            odd_flag += 1;
    }
    if (odd_flag > 1)
        return false;
    else
        return true;
}

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

char construct_palindrome (char arr[], int length)
{
    char *temp, *temp2;
    temp = malloc (length * sizeof(char));
    temp2 = malloc ((length * 2) * sizeof(char));


}

int main()
{
    char list[50];
    scanf("%s", list);
    int s = strlen(list);
    if (s % 2 == 0){

    }
    else if (s % 2 == 1){

    }
    printf("%s %d", list, s);
}
