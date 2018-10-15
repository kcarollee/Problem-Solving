#include <stdio.h>
#define MAX 251
int process(char arr[MAX])
{
	int alph = 0;
	for (int i = 0; i != '\0'; i++){
		if ((65 <= *arr[i] && *arr[i] <= 90) || (97 <= *arr[i] && *arr[i] <= 122)){
			alph++;
		}
	}
	return alph;
}

void clear(char arr[MAX])
{
	for (int i = 0; i < MAX; i++){
		arr[i] = '\0';
	}
}

int main()
{
	int x;
	char arr[MAX];
	gets(arr);
	while (arr[0] != '#'){
		x = process(arr);
		printf("%d", x);
		clear(arr);
		gets(arr);
	}

	return 0;
}
