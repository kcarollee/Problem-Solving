#include <iostream>
using namespace std;

class Test
{
private:
    int num;
public:
    Test(int n) : num(n) {}
    Test& Add(int n)
    {
        num += n;
        return *this;
    }
    void Func()
    {
        cout<<"Called Func"<<num<<endl;
    }
    void Func() const
    {
        cout<<"Called const Func"<<num<<endl;
    }
};

void Outer(const Test &obj)
{
    obj.Func();
}

int main()
{
    Test obj_1(2);
    const Test obj_2(7);

    obj_1.Func();
    obj_2.Func();

    Outer(obj_1);
    Outer(obj_2);

    return 0;
}









