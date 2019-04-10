#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

struct Student
{
	int prime;
};

struct Song
{
	int date;
	int time;
	int primeID;
	int studentNum;
	vector<int> participants;
	//char name[50];
};

class Schedule
{
public:
	Schedule()
	{
		for (int i = 0; i < 14; i++) {
			vector<int> columns;
			for (int j = 0; j < 7; j++) {
				columns.push_back(0);
			}
			board.push_back(columns);
		}
	}
	~Schedule() {}
	void setup(int memberNum, int songNum)
	{
		this->memberNum = memberNum;
		this->songNum = songNum;
	}
	void generatePrime()
	{
		int flag = 0;
		int start = 2;
		while (flag != memberNum) {
			if (isPrime(start)) {
				primeArr.push_back(start);
				flag++;
			}
			start++;
		}
	}
	bool isPrime(int num)
	{
		if (num == 2) {
			return true;
		}
		else {
			for (int i = 2; i < num; i++) {
				if (num % i == 0) {
					return false;
				}
			}
			return true;
		}
	}
	void generateStudentArr()
	{
		generatePrime();
		for (int i = 0; i < memberNum; i++) {
			Student *s = new Student();
			s->prime = primeArr[i];
			studentArr.push_back(s);
		}
	}
	void generateSongArr()
	{
		for (int i = 0; i < songNum; i++) {
			Song *s = new Song();
			songArr.push_back(s);
		}
	}
	void showInterface()
	{
		cout << "Enter number of participants: ";
		int stuNum;
		cin >> stuNum;
		cout << "Enter number of songs: ";
		int sngNum;
		cin >> sngNum;
		setup(stuNum, sngNum);
		generateStudentArr();
		generateSongArr();
		cout << "There are total of " << songNum << " songs to practice." << endl;
		int songIndex = 0;
		// Entering data for each song
		while (songIndex != songNum) {
			cout << "-----------------------------------------------------------------" << endl;
			cout << "-----------------------------------------------------------------" << endl;
			cout << "Index of all the members and their corrseponding prime ID: " << endl;
			for (int i = 0; i < studentArr.size(); i++) {
				cout << i << " : " << studentArr[i]->prime << endl;
			}
			cout << "-----------------------------------------------------------------" << endl;
			cout << endl;
			
			cout << "Enter data for song number " << songIndex + 1 << endl;
			//cout << "Enter song name: ";
			//string songname;
			//getline(cin, songname);
			//songArr[songIndex]->name.copy(songname);
			cout << endl;
			
			cout << "How many members are playing this song? ";
			cin >> songArr[songIndex]->studentNum;
			cout << endl;
			
			cout << "Enter the index of students who are playing this song. " << endl;
			for (int i = 0; i < songArr[songIndex]->studentNum; i++) {
				int index;
				cin >> index;
				songArr[songIndex]->participants.push_back(index);
			}
			cout << endl;
			
			cout << "The following number is the prime ID for the song: ";
			int primeProduct = 1;
			for (auto a : songArr[songIndex]->participants) {
				primeProduct *= primeArr[a];
			}
			songArr[songIndex]->primeID = primeProduct;
			cout << primeProduct << endl;
			cout << endl;
			
			cout << "Enter the day of practice session. (0 = MON, 1 = TUE, 2 = WED, 3 = THU, 4 = FRI, 5 = SAT, 6 = SUN)" << endl;
			int day;
			cin >> day;
			songArr[songIndex]->date = day;
			cout << endl;
			
			cout << "Enter the time of practice session" << endl;
			cout << "(0 = 10AM, 1 = 11AM, 2 = 12PM, 3 = 1PM, 4 = 2PM, 5 = 3PM, 6 = 4PM, 7 = 5PM\n"
				"8 = 6PM, 9 = 7PM, 10 = 8PM, 11 = 9PM, 12 = 10PM, 13 = 11PM)" << endl;
			int time;
			cin >> time;
			songArr[songIndex]->time = time;
			board[songArr[songIndex]->time][songArr[songIndex]->date] = songArr[songIndex]->primeID;
			
			// show schedule board
			printf("      %6s%6s%6s%6s%6s%6s%6s\n", "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN");
			int hour = 10;
			for (int i = 0; i < 14; i++) {
				printf("%6d", hour);
				for (int j = 0; j < 7; j++) {
					printf("%6d", board[i][j]);
				}
				hour++;
				cout << endl;
			}
			cout << endl;
			songIndex++;
		}
		cout << "-----------------------------------------------------------------" << endl;
		cout << "-----------------------------------------------------------------" << endl;
		cout << "Data for all songs entered" << endl;
		cout << "Press 'a' to check a specific student's available schedule slots" << endl;
		cout << "Type 'exit' and press enter to exit program" << endl;
		char command[10];
		cin >> command;
		while (strcmp(command, "exit") != 0) {
			if (strcmp(command, "a") == 0) {
				int index;
				cout << "Enter the index of the student whose available slots you'd like to view: ";
				cin >> index;
				printf("      %6s%6s%6s%6s%6s%6s%6s\n", "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN");
				int hour = 10;
				for (int i = 0; i < 14; i++) {
					printf("%6d", hour);
					for (int j = 0; j < 7; j++) {
						if (board[i][j] != 0) {
							if (board[i][j] % studentArr[index]->prime == 0) {
								printf("%6s", "AVAIL");
							}
							else
								printf("%6d", 0);
						}
						else
							printf("%6d", 0);
					}
					hour++;
					cout << endl;
				}
			}
			cout << "-----------------------------------------------------------------" << endl;
			cout << "Press 'a' to check a specific student's available schedule slots" << endl;
			cout << "Type 'exit' and press enter to exit program" << endl;
			cin >> command;
		}
	}

	void showBoard_1()
	{

	}
public:
	int memberNum;
	int songNum;
	vector<int> primeArr;
	vector<Student*> studentArr;
	vector<Song*> songArr;
	vector<vector<int>> board;
};

int main()
{
	Schedule s;
	s.showInterface();
	return 0;
}
