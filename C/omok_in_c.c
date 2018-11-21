#include <stdio.h>
#include <stdbool.h>
int win_flag = 0;
int board[16][16] = {0};
int turns = 0;
void show_board(int *arr)
{
	for (int i = 0; i < 17; i++){
		for (j = 0; j < 17; j++){
			if (i == 0) printf("%.2d ", j);
			else{
				if (j == 0) printf("%.2d", i);
				else printf()
			}
		}
	}
}

void place_marker(int *arr, int x_pos, int y_pos)
{

}

bool check()
{

}

bool is_overlapping()
{

}


int main()
{
	
}