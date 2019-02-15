#include <iostream>
#include <vector>
using namespace std;

template <typename Object>
class MemoryCell
{
private:
    Object storedValue;
public:
    explicit MemoryCell (const Object & initialValue = Object{})
    : storedValue{initialValue} {}
    const Object & read() const
    {
        return storedValue;
    }
    void write(const Object & x)
    {
        storedValue = x;
    }
};

template <typename Comparable>
const Comparable & findMax(const vector<Comparable> & a)
{
    int maxIndex = 0;
    for (int i = 1; i < a.size(); ++i){
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }
    return a[maxIndex];
}

template <typename Iter>
Iter & fill(vector<Iter> & a, int vecSize)
{
    for (int i = 0 ; i < vecSize; i++){
        cin>>a[i];
    }
    cout<<"All Filled!"<<endl;
}

template <typename Elem>
Elem & show(vector<Elem> & b, int vecSize)
{
    for (int i = 0; i < vecSize; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"These are the elements"<<endl;
}

int main()
{
    vector<int> v1(3);
    vector<double> v2(3);
    vector<string> v3(3);
    fill(v1, 3);
    fill(v2, 3);
    fill(v3, 3);
    show(v1, 3);
    show(v2, 3);
    show(v3, 3);

    MemoryCell<int> m1;
    MemoryCell<string> m2{"Hello"};

    m1.write(37);
    m2.write(m2.read() + "world");
    cout<<m1.read()<<endl<<m2.read()<<endl;

    return 0;
}
