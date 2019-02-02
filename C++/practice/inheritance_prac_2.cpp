#include <iostream>
using namespace std;
class Progression
{
private:
    int first;
    int increment;
    int len;
public:
    Progression(int f, int inc, int l) : first(f), increment(inc), len(l)
    {}
    void Advance()
    {
        first += increment;
    }
    void Show()
    {
        for (int i = 0; i < len; i++){
            cout<<first<<" ";
            Advance();
        }
    }
};

class Arth : public Progression
{
public:
    Arth(int f, int i, int l) : Progression(f, i, l) {}

};

int main()
{
    Arth a(1, 2, 10);
    a.Show();
    return 0;
}
