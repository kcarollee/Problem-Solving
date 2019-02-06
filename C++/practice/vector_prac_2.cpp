#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int>::iterator it;
    int input;
    cin>>input;
    while (input != 42){
        arr.push_back(input);
        for (auto item : arr){
            cout<<item<<" ";
        }
        cout<<"\n"<<arr.size()<<endl;
        cin>>input;
    }

    for (it = arr.begin(); it < arr.end(); it++){
        cout<<*(it)<<" ";
    }
    return 0;
}
