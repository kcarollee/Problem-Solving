#include <iostream>
#include <vector>
using namespace std;

class Test
{
public:
    void push();

public:
    static vector<int> arr;
};

vector<int> Test::arr;

void Test::push()
{
    arr.push_back(1);
}

int main()
{
    Test t;
    Test t2;
    t.push();
    t2.push();
    for (auto i : Test::arr){
        cout<<i<<endl;
    }
    return 0;
}
