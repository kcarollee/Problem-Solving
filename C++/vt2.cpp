#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char *string;
	string = (char*) malloc(10 * sizeof(char));
	cin>>string;
	cout<<"Your input was: "<<string<<endl;
	return 0;
}
