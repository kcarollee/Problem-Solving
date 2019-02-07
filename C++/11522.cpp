#include <iostream>
#include <cstdlib>
using namespace std;

class Calc
{
private:
    int sum_1;
    int until;
public:
    Calc()
    {
        sum_1 = 0;
    }

    void Setup(int x)
    {
        until = x;
    }
    void Answer()
    {
        for (int i = 1; i <= until; i++){
            sum_1 += i;
        }
    }
    void Show() const
    {
        cout<<sum_1<<" "<<sum_1 * 2 - until<<" "<<sum_1 * 2<<endl;
    }

};

int main()
{
    int test_case;
    int N;
    int set_number;
    Calc data;
    cin>>test_case;
    for (int i = 1; i <= test_case; i++){
        Calc data;
        cin>>set_number;
        cin>>N;
        data.Setup(N);
        data.Answer();
        cout<<set_number<<" ";
        data.Show();

    }
    return 0;
}










