//Bad!
#include <iostream>
#include <cstdlib>
using namespace std;

class Lamps
{
private:
	int len;
	int sec;
	int *lamps;
	int fill_index;
public:
	Lamps(int length, int seconds) : len(length), sec(seconds), fill_index(0)
	{
		lamps = new int[length];
	}
	void Fill(int elem)
	{
		*(lamps + fill_index) = elem;
		fill_index++;
	}
	void Change(int * a)
	{
		if (*a == 1)
			*a = 0;
		else
			*a = 1;
	}
	bool AllFilled()
	{
	    for (int i = 0; i < len; i++){
            if(*(lamps + i) == 0) return false;
	    }
	    return true;
	}
	void Process()
	{
		for (int i = 0; i < sec; i++){
			if (AllFilled()){
                lamps = (int *) calloc(len, sizeof(int));
                break;
			}
			for (int j = 0; j < len - 1; j++){
				if (*(lamps + j + 1) == 1){
					Change((lamps + j));
				}
			}
		}
		for (int i = 0; i < len; i++){
			cout<<*(lamps + i)<<endl;
		}
	}

};

int main()
{
	int n, m, elem;
	cin>>n;
	cin>>m;
	Lamps lamp(n, m);
	for (int i = 0; i < n; i++){
		cin>>elem;
		lamp.Fill(elem);
	}
	lamp.Process();
	return 0;
}
