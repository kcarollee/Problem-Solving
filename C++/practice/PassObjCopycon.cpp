#include <iostream>
using namespace std;

class Simple
{
private:
    int num;
public:
    Simple (int n) : num(n)
    {

    }
    Simple (const Simple& copy) : num(copy.num)
    {
        cout<<"Called Simple(const~)"<<endl;
    }
    void Show()
    {
        cout<<"num: "<<num<<endl;
    }
};

void SimpleFunc(Simple ob)
{
    ob.Show();
}

int main()
{
    Simple obj(7);
    cout<<"Before function call: "<<endl;
    SimpleFunc(obj);
    cout<<"After function call: "<<endl;
    return 0;
}
