#include <iostream>
#include <cstring>
using namespace std;

class Simple
{
private:
    int num;
public:
    Simple(int n) : num(n)
    {
        cout<<"num = "<<num<<", ";
        cout<<"address = "<<this<<endl;
    }
    void ShowSimpleData()
    {
        cout<<num<<endl;
    }
    Simple * GetThisPointer()
    {
        return this;
    }
};

int main()
{
    Simple sim1(100);
    Simple * ptr1 = sim1.GetThisPointer();
    cout<<ptr1<<", ";
    ptr1 -> ShowSimpleData();

    Simple sim2(200);
    Simple * ptr2 = sim2.GetThisPointer();
    cout<<ptr2<<", ";
    ptr2 -> ShowSimpleData();
    return 0;
}

