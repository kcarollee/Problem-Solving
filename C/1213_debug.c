#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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
	temp = malloc(len * sizeof(char));
	for (int i = 0; i < len; i++){
        *(temp + i) = *(string + len - 1 - i);
	}

	return temp;

}

char *construct_palindrome (char arr[], int length, struct char_num char_data[26])
{
    char *temp, *temp2, *temp3;
    temp = malloc (length * sizeof(char));
    int temp_cur = 0;
    temp2 = malloc (length * sizeof(char));
    temp3 = malloc (1 * sizeof(char));
    if (length % 2 == 0){
    	for (int i = 0; i < length; i++){
    		if (i == 0 || arr[i] != arr[i - 1]){
	    		for (int j = 0; j < 26; j++){
	    			if (j == arr[i]){
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
    	return temp;
    }


    else if (length % 2 == 1){
    	for (int i = 0; i < length; i++){
    		if (i == 0 || arr[i] != arr[i - 1]){
	    		for (int j = 0; j < 26; j++){
	    			if (j == arr[i]){
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

    for (int v = 0; v < 26; v++)
        printf("%d\n", char_data[v].number);
    sort_string(list);
    printf("%s\n", list);

    if (is_possible(list, s, char_data) == 1){
    	printf("test1\n");
    	printf("%d\n", is_possible(list, s, char_data));
    	printf("%s\n", construct_palindrome(list, s, char_data));
    }
    else if (is_possible(list, s, char_data) == 0){
    	printf("test2\n");
    	printf("I'm Sorry Hansoo\n");
    	printf("%d\n", is_possible(list, s, char_data));
    }
    return 0;
}

