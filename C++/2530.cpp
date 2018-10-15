#include <iostream>
using namespace std;

class Oven
{
  private:
 	int hour;
 	int minn;
 	int sec;
 	int sec2;
 public:
 	void Initialize(int Hour, int Min, int Sec, int Sec2)
 	{
 		hour = Hour;
 		minn = Min;
 		sec = Sec;
 		sec2 = Sec2;
 	}

 	void ManageHour()
 	{
 		if (sec2 >= 3600){
 			hour += sec2 / 3600;
 			if (hour > 23){
 				hour %= 24;
 			}
 			sec2 -= 3600 * (sec2 / 3600);
 		}
 	}

 	void ManageMin()
 	{
 		if (sec2 >= 60){
 			minn += sec2 / 60;
 			if (minn > 59){
 				minn %= 60;
 				hour += 1;
 			}
 			sec2 -= 60 * (sec2 / 60);
 		}
 	}

 	void ManageSec()
 	{
 		sec += sec2;
 		if (sec > 59){
 			sec %= 60;
 			minn += 1;
 			if (minn > 59){
 				minn %= 60;
 				hour += 1;
 				if (hour > 23){
 					hour %= 24;
 				}
 			}
 		}
 		cout<<hour<<' '<<minn<<' '<<sec;
 	}
};

int main()
{
	int hour, minute, second, second2;
	cin>>hour>>minute>>second;
	cin>>second2;
	Oven answer;
	answer.Initialize(hour, minute, second, second2);
	answer.ManageHour();
	answer.ManageMin();
	answer.ManageSec();

	return 0;

}
