#include <iostream>
#include <vector>
using namespace std;
class Circle
{
public:
    float radius;
public:

    void setup(float r)
    {
        radius = r;
    }
    float show()
    {
        return radius;
    }
};

int main()
{
    Circle *a;
    Circle *b;
    vector<Circle* > carr;
    a = new Circle();
    b = new Circle();

    carr.push_back(a);
    carr.push_back(b);

    for (auto circ : carr){
        cout<<circ->show()<<endl;
    }
}
