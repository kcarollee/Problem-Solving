#include <stdio.h>


int main()
{
	char arr[5][5];
	int row, col;
	for (row = 0; row < 5; row++){
		for (col = 0; col < 5; col++){
			scanf("%c", &arr[row][col]);
		}
	}

	for (col = 0; col < 5; col++){
		for(row = 0; row < 5; row++){
			if (arr[row][col] == '\0')
				continue;
			else
				printf("%c", arr[row][col]);
		}
	}
	return 0;
}


//try using pointers, dumbass//

