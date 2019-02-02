#include <iostream>
using namespace std;

class Test
{
private:
    int num1;
    mutable int num2;
public:
    Test(int x, int y) : num1(x), num2(y)
    {}
    void Show() const
    {
        cout<<num1<<", "<<num2<<endl;
    }
    void CopyToNum2() const
    {
        num2 = num1;
    }
};

int main()
{
    Test t(1, 2);
    t.Show();
    t.CopyToNum2();
    t.Show();
    return 0;
}

