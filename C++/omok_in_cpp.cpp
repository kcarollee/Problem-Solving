#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

class Omok
{
private:
	int board[16][16];
	int turns;
	int winflag;
public:
	Omok() : turns(0), winflag(0)
	{
		memset(board, 0, 4 * 256);
		cout<<"Test"<<endl;
	}
	void place_marker(int xpos, int ypos);
	bool check();
	bool is_overlapping(int x, int y);
	void show_board();
	int win() { return winflag; }
	void play()
	{
		int row, column;
		if (turns % 2 == 0) { cout << "White's turn. Enter the coordinates of your move: " << endl; }
		else { cout << "Black's turn. Enter the coordinates of your move: " << endl; }
		cout << "Enter row number: ";
		cin >> row;
		if (!(1 <= row && row <= 16)) { cout << "Coordinate values must be between 0 and 17\n"; }
		cout << "Enter column number: ";
		cin >> column;
		if (!(1 <= column && column <= 16)) { cout << "Coordinate values must be between 0 and 17\n"; }
		if (column <= 0 || row <= 0) { cout << "Coordinate values must be between 0 and 17\n"; }
		else if (is_overlapping(row, column)) { cout << "That space is already occupied. Choose another coordinate. \n"; }
		else {
			place_marker(row, column);
			show_board();
		}
	}
};

void Omok::place_marker(int xpos, int ypos)
{
	if (turns % 2 == 0) {
		board[xpos - 1][ypos - 1] = 1;
		turns++;
		if (check()) {
			cout << "White is the winner!\n";
			winflag += 1;

		}
	}
	else {
		board[xpos - 1][ypos - 1] = 2;
		turns++;
		if (check()) {
			cout << "Black is the winner!\n";
			winflag += 1;

		}

	}
}

bool Omok::check()
{
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 12; j++) {
			if (board[i][j] != 0) {
				if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3] && board[i][j + 3] == board[i][j + 4]) {
					return true;
				}
			}
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 16; j++) {
			if (board[i][j] != 0) {
				if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 2][j] == board[i + 3][j] && board[i + 3][j] == board[i + 4][j]) {
					return true;
				}
			}
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			if (board[i][j] != 0) {
				if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3] && board[i + 3][j + 3] == board[i + 4][j + 4]) {
					return true;
				}
			}
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int j = 4; j < 15; j++) {
			if (board[i][j] != 0) {
				if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] == board[i + 3][j - 3] && board[i + 3][j - 3] == board[i + 4][j - 4]) {
					return true;
				}
			}
		}
	}
	return false;
}
bool Omok::is_overlapping(int x, int y)
{
	if (board[x - 1][y - 1] == 0)
		return false;
	return true;
}
void Omok::show_board()
{
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			if (i == 0) {
				printf("%.2d ", j);
			}
			else {
				if (j == 0)
					printf("%.2d ", i);
				else
					printf("%d  ", board[i - 1][j - 1]);

			}
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	Omok game;
	game.show_board();
	while (true) {
		game.play();
		if (game.win() == 1)
			break;
	}
	return 0;
}
