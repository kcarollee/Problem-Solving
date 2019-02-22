#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    list<int> arr;
    int *arr2;
    int *ptr;
    arr2 = new int[10];
    for (int i = 0; i < 10; i++){
        *(arr2 + i) = i + 1;
    }
    for (int i = 0; i < 10; i++){
        arr.push_back(*(arr2 + i));
    }
    for (auto b : arr){
        cout<<b<<endl;
    }
    for (auto c : arr){
        if (c == 3){
            ptr = &c;
        }
    }
    vector <int> arr3;
    for (int i = 0; i < 10; i++){
        arr3.push_back(i + 1);
    }

    for (int i = 0; i < 10; i++){
        if (i == 3){
            ptr = &arr3[i];
        }
    }

    arr3.erase(arr3.begin() + 1);
    for (int i = 0; i < arr3.size(); i++){
        cout<<arr3[i]<<endl;
    }
}
