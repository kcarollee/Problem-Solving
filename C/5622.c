#include <stdio.h>
#include <string.h>
int calc (char str[]);
int main()
{
	int num, N;
	char str[N];
	scanf("%s", str);
	printf("%d", calc(str));
	return 0;
	
}


int calc(char str[])
{
	int i = 0;
	int N = strlen(str);
	int sum = 0;
	for (i = 0; i <= N - 1; i++){
		if (65 <= str[i] && str[i] <= 67){
			sum += 3;
		}
		else if (68 <= str[i] && str[i] <= 70){
			sum += 4;
		}
		else if (71 <= str[i] && str[i] <= 73){
			sum += 5;
		}
		else if (74 <= str[i] && str[i] <= 76){
			sum += 6;
		}
		else if (77 <= str[i] && str[i] <= 79){
			sum += 7;
		}
		else if (80 <= str[i] && str[i] <= 83){
			sum += 8;
		}
		else if (84 <= str[i] && str[i] <= 86){
			sum += 9;
		}
		else if (87 <= str[i] && str[i] <= 90){
			sum += 10;
		}
	}
	
	return sum;
}
