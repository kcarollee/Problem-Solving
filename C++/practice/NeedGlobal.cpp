#include <iostream>
using namespace std;

/*int obj_1_count = 0; //Shared by every instance of First.
int obj_2_count = 0; //Shared by every instance of Second.
*/
class First
{
public:
    First()
    {
        obj_1_count++;
        cout<<"First object #"<<obj_1_count<<" is created."<<endl;
    }
};

class Second
{
public:
    Second()
    {
        obj_2_count++;
        cout<<"Second object #"<<obj_2_count<<" is created."<<endl;
    }
    Second(Second &copy)
    {
        obj_2_count++;
        cout<<"Second object #"<<obj_2_count<<" is created."<<endl;
    }
};

int main()
{
    First obj1;
    First obj2;

    Second ob1;
    Second ob2 = ob1;
    Second();

    return 0;
}
