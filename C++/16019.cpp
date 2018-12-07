#include <iostream>
#include <cmath>
using namespace std;

class DisTable
{
private:
	int arr[5];
public:
	DisTable(int a, int b, int c, int d)
	{
		*(arr) = 0;
		*(arr + 1) = a;
		*(arr + 2) = a + b;
		*(arr + 3) = a + b + c;
		*(arr + 4) = a + b + c + d;
	}
	void Table()
	{
		for (int i = 0; i < 5; i++){
			for (int j = 0; j < 5; j++){
				cout<<abs(*(arr + i) - *(arr + j))<<' ';
			}
			cout<<endl;
		}
	}
};

int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	DisTable(a, b, c, d).Table();
	return 0;

}