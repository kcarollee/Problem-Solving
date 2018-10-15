#include <stdio.h>
#include <math.h>
float pytha(int, int, int);
int main()
{
	int a, b, c, t = 1;
	scanf("%d %d %d", &a, &b, &c);
	while (a != 0 || b != 0 || c!= 0){
		if (a == -1){
			if (pytha(a, b, c) == 0){
				printf("Triangle #%d\nImpossible.\n\n", t);
			}
			else
				printf("Triangle #%d\na = %.3f\n\n", t, pytha(a, b, c));
		}
		else if (b == -1){
			if (pytha(a, b, c) == 0){
				printf("Triangle #%d\nImpossible.\n\n", t);
			}
			else
				printf("Triangle #%d\nb = %.3f\n\n", t, pytha(a, b, c));
		}
		else if (c == -1){
			printf("Triangle #%d\nc = %.3f\n\n", t, pytha(a, b, c));
		}
		t++;
		scanf("%d %d %d", &a, &b, &c);

	}
	return 0;
}

float pytha(int a, int b, int c)
{

	if (c == -1){
		return pow(a*a + b*b, 0.5);

	}

	else if (a == -1 || b == -1){
		if (a >= c || b >= c){
			return 0;
		}
		else
			if (a == -1){
				return pow(c*c - b*b, 0.5);
			}
			else if (b == -1){
				return pow(c*c - a*a, 0.5);
			}
	}


}
