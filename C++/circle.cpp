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
};

int main()
{
    vector<Circle*> carr;
    Circle *c;
    Circle *b;
    Circle *a;
    c = new Circle();
    b = new Circle();
    a = new Circle();
    a->setup(1);
    b->setup(2);
    c->setup(1);
    carr.push_back(a);
    carr.push_back(b);
    carr.push_back(c);
    for (int i = 0; i < carr.size(); i++){
        for (int j = 0; j < carr.size(); j++){
            if (i == j)
                continue;
            else{
                if (carr[i]->radius == carr[j]->radius){
                    //carr.erase(carr.begin() + i);
                    //carr.erase(carr.begin() + j);
                }
            }
        }
    }

    for (int i = 0; i < carr.size(); i++){
        cout<<carr[i]->radius<<endl;
    }
    cout<<endl;





}
