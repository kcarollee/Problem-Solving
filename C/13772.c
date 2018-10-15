#include <stdio.h>
#define MAX 251
int read(char arr[MAX]);

int main()
{
	int t;
	char arr[MAX];
    getchar();
	scanf("%d", &t);
	for (int i = 0; i < t+1; i++){
		gets(arr);
		printf("%d\n", read(arr));
		for (int y = 0; y < MAX; y++){
			arr[y] = '\0';
		}
	}
	return 0;
}

int read(char arr[MAX])
{
	int x = 0;
	for (int p = 0; p < MAX; p++){
		if (arr[p]=='A'||arr[p]=='D'||arr[p]=='O'||arr[p]=='P'||arr[p]=='Q'||arr[p]=='R'){
			x += 1;
		}
		else if (arr[p] == 'B'){
			x += 2;
		}
		else if (arr[p] == '\0')
			break;
	}

	return x;
}
