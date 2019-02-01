#include <iostream>
using namespace std;

class Simple
{
private:
    int num1;
    int num2;
public:
    Simple(int n1, int n2) : num1(n1), num2(n2)
    {}
    Simple(Simple &copy) : num1(copy.num1), num2(copy.num2)
    {
        cout<<"Called Simple(Simple &copy)"<<endl;
    }

    void ShowSimpleData()
    {
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};

int main()
{
    Simple sim1(15, 20);
    cout<<"Before construction and init"<<endl;
    Simple sim2 = sim1;
    cout<<"After construction and init"<<endl;
    sim2.ShowSimpleData();
    return 0;
}
