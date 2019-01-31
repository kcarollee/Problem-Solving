#include <iostream>
using namespace std;

class TwoNumber
{
private:
    int num1;
    int num2;
public:
    TwoNumber(int num1, int num2)
    {
        this -> num1 = num1;
        this -> num2 = num2;
    }
    /*
    TwoNumber()
    {
        num1 = NULL;
        num2 = NULL;
    }
    */
    /*
    TwoNumber(int num1, int num2) : num1(num1), num2(num2){}
    */
    void Show()
    {
        cout<<this->num1<<endl;
        cout<<this->num2<<endl;
    }
};

int main()
{
    TwoNumber *arr[3];
    int x,y;
    for (int i = 0; i < 3; i++){
        cin>>x>>y;
        arr[i] = new TwoNumber(x, y);
    }
    arr[0] -> Show();
    arr[1] -> Show();
    arr[2] -> Show();
    return 0;

}  
