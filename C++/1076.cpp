#include <iostream>
#include <cstring>
using namespace std;

class Resistor
{
private:
	char *arr1;
	char *arr2;
	char *arr3;
public:
	Resistor(char *c1, char *c2, char *c3)
	{
		int len1 = strlen(c1), len2 = strlen(c2), len3 = strlen(c3);
		arr1 = new char[len1 + 1];
		arr2 = new char[len2 + 1];
		arr3 = new char[len3 + 1];
		strcpy(arr1, c1);
		strcpy(arr2, c2);
		strcpy(arr3, c3);
	}

	long long int MatchingVal(char *arr)
	{
		if (!strcmp(arr, "black"))
			return 0;
		else if (!strcmp(arr, "brown"))
			return 1;
		else if (!strcmp(arr, "red"))
			return 2;
		else if (!strcmp(arr, "orange"))
			return 3;
		else if (!strcmp(arr, "yellow"))
			return 4;
		else if (!strcmp(arr, "green"))
			return 5;
		else if (!strcmp(arr, "blue"))
			return 6;
		else if (!strcmp(arr, "violet"))
			return 7;
		else if (!strcmp(arr, "grey"))
			return 8;
		else if (!strcmp(arr, "white"))
			return 9;
	}

	long long int MatchingMult(char *arr)
	{
		if (!strcmp(arr, "black"))
			return 1;
		else if (!strcmp(arr, "brown"))
			return 10;
		else if (!strcmp(arr, "red"))
			return 100;
		else if (!strcmp(arr, "orange"))
			return 1000;
		else if (!strcmp(arr, "yellow"))
			return 10000;
		else if (!strcmp(arr, "green"))
			return 100000;
		else if (!strcmp(arr, "blue"))
			return 1000000;
		else if (!strcmp(arr, "violet"))
			return 10000000;
		else if (!strcmp(arr, "grey"))
			return 100000000;
		else if (!strcmp(arr, "white"))
			return 1000000000;
	}

	long long int Resistance()
	{
		return (MatchingVal(arr1) * 10 + MatchingVal(arr2)) * MatchingMult(arr3);
	}

};

int main()
{
	char arr1[7], arr2[7], arr3[7];

	cin>>arr1;
	cin>>arr2;
	cin>>arr3;
	cout<<Resistor(arr1, arr2, arr3).Resistance()<<endl;

	return 0;
}
