#include <iostream>
using namespace std;

class Test1
{
private:
    static int objcnt_1;
public:
    Test1()
    {
        objcnt_1++;
        cout<<"Test1 instane #"<<objcnt_1<<endl;
    }
};

int Test1::objcnt_1 = 0;

class Test2
{
private:
    static int objcnt_2;
public:
    Test2()
    {
        objcnt_2++;
        cout<<"Test2 instane #"<<objcnt_2<<endl;
    }
    Test2(Test2 &copy)
    {
        objcnt_2++;
        cout<<"Test2 instane #"<<objcnt_2<<endl;
    }
};

int Test2::objcnt_2 = 0;

int main()
{
    Test1 first1;
    Test1 first2;

    Test2 second1;
    Test2 second2 = second1;
    Test2();
    return 0;
}







            
            
