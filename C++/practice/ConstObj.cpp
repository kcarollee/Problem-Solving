#include <iostream>
using namespace std;

class Test
{
private:
    int num;
public:
    Test(int n) : num(n){}
    Test& Add(int n)
    {
        num += n;
        return *this;
    }
    void Show() const
    {
        cout<<"Num: "<<num<<endl;
    }
};

int main()
{
    const Test obj(3);
    obj.Add(4);
    obj.Show();
    return 0;
}
