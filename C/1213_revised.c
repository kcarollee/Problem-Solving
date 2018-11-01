#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct char_num {
    int number;
};

void get_data(char arr[], struct char_num char_data[], int length)
{
    for (int p = 0; p < 26; p++){
        char_data[p].number = 0;
    }
    for (int i = 0; i < length; i++){
        for (int j = 0; j < 26; j++){
            if (arr[i] == 65 + j){
                char_data[j].number += 1;
            }
        }
    }
}
int is_possible(char array[], int length, struct char_num *char_data)
{
    int odd_flag = 0;

    for (int k = 0; k < 26; k++){
        if (char_data[k].number % 2 == 1)
            odd_flag += 1;
    }
    if (odd_flag > 1)
        return 0;
    else
        return 1;
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

char *reverse_string(char *string)
{
   char *temp;
   int len = strlen(string);
   temp = (char*)malloc((len+1) * sizeof(char));
   for (int i = 0; i < len; i++){
        *(temp + i) = *(string + len - 1 - i);
   }
   temp[len]='\0';

   return temp;

}

char *construct_palindrome (char arr[], int length, struct char_num char_data[26])
{
    char *temp, *temp2, *temp3;
    temp = (char*)malloc ((length+1)  * sizeof(char));
    int temp_cur = 0;
    temp2 = (char*)malloc ((length+1) * sizeof(char));
    temp3 = (char*)malloc(2*sizeof(char));
    if (length % 2 == 0)
    {
       for (int i = 0; i < length; i++){
          if (i == 0 || arr[i] != arr[i - 1]){
             for (int j = 0; j < 26; j++){
                if (j + 65 == arr[i]){
                   for (int k = 0; k < char_data[j].number/2; k++){
                      temp[temp_cur] = arr[i];
                      temp_cur += 1;
                   }
                }
             }
          }
       }
       temp2 = reverse_string(temp);
       strcat(temp, temp2);
       temp[length]='\0';
       return temp;
    }


    else if (length % 2 == 1){
       for (int i = 0; i < length; i++){
          if (i == 0 || arr[i] != arr[i - 1]){
             for (int j = 0; j < 26; j++){
                if (j + 65 == arr[i]){
                   if (char_data[j].number % 2 == 1){
                      temp3[0] = 65 + j;
                      for (int k = 0; k < (char_data[j].number-1)/2; k++){
                         temp[temp_cur] = arr[i];
                         temp_cur += 1;
                      }
                   }
                   else{
                      for (int k = 0; k < char_data[j].number/2; k++){
                         temp[temp_cur] = arr[i];
                         temp_cur += 1;
                         }
                      }
                   }
                }
             }
          }
       }
       temp2 = reverse_string(temp);

       strcat(temp, temp3);
       strcat(temp, temp2);
       return temp;
}

int main()
{
    char list[50];
    scanf("%s", list);
    int s = strlen(list); 
    struct char_num char_data[26];
    for (int p = 0; p < 26; p++){
        char_data[p].number = 0;
    }
    get_data(list, char_data, s);

    sort_string(list);
    if (is_possible(list, s, char_data) == 1){
       printf("%s\n", construct_palindrome(list, s, char_data));
    }
    else if (is_possible(list, s, char_data) == 0){
       printf("I'm Sorry Hansoo\n");
    }
    return 0;
}
