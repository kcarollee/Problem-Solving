#include <stdio.h>
#include <stdbool.h>

int initialize(int arr[9])
{
	for (int a = 0; a <= 8; a++){
		arr[a] = 0;
	}
}

int determine(int arr[9])
{
	int flag = 0;
	for (int x = 0; x <= 8; x++){
		if (arr[x] != 1)
			flag = 1;
	}
	return flag;
}

int index(int arr[9][9])
{
	int a, b, c;
	int empt[9] = {0,0,0,0,0,0,0,0,0};
	for (a = 0; a <= 8; a++){
		for (b = 0; b <= 8; b++){
			for(c = 1; c <= 9; c++){
				printf("%d %d\n", c, arr[a][b]);
				if (c == arr[a][b]){
					empt[c-1] += 1;
					printf("%d%d%d%d%d%d%d%d%d\n", empt[0], empt[1], empt[2], empt[3], empt[4], empt[5], empt[6], empt[7], empt[8]);
					break;
				}

            }

        }
        if (determine(empt) == 1){
            printf("nope1\n");
            return 0;}
        initialize(empt);
	}

    for (int f = 0; f <= 8; f++){
		for (int g = 0; g <= 8; g++){
			for (int h = 1; h <= 9; h++){
				printf("%d %d\n", h, arr[g][f]);
				if (h == arr[g][f]){
					empt[h-1] += 1;
					printf("%d%d%d%d%d%d%d%d%d\n", empt[0], empt[1], empt[2], empt[3], empt[4], empt[5], empt[6], empt[7], empt[8]);
                    break;
				}

			}
		}
        if(determine(empt) == 1){
            printf("nope2\n");
            return 0;}
        initialize(empt);
    }

	for (int k = 1; k <= 9; k++){
		for (int x = 0; x <= 2; x++){
			for (int y = 0; y <= 2; y++){
			    printf("%d %d\n",((k-1)/3)*3+x, ((k-1)%3)*3+y);
				for (int z = 1; z <= 9; z++){
					if (z == arr[((k-1)/3)*3+x][((k-1)%3)*3+y]){
						empt[z-1] += 1;
						printf("%d%d%d%d%d%d%d%d%d\n", empt[0], empt[1], empt[2], empt[3], empt[4], empt[5], empt[6], empt[7], empt[8]);
                        break;
					}
                }
			}
		}
        if(determine(empt) == 1){
            printf("nope3\n");
            return 0;}
        initialize(empt);
        }
    printf("Yes");
}

int main()
{
	int arr[9][9], tc, deflt;
	scanf("%d", &tc);
	for (int i = 1; i <= tc; i++){
		scanf("%d", &deflt);
		for (int a = 0; a <= 8; a++){
			for (int b = 0; b <= 8; b++){
				scanf("%d", &arr[a][b]);
			}
		}
		index(arr);
	}
	return 0;
}

