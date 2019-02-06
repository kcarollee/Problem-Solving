#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int *values;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> arr_2;
    values = new int[8];
    for (int i = 0; i < 8; i++){
        cin>>*(values + i);
    }
    for (int i = 0; i < 8; i++){
        cout<<*(values + i)<<endl;
    }
    for (auto item : arr){
        cout<<item<<endl;
    }
    cout<<"Testing vector"<<endl;
    arr_2.assign(5, 10);
    for (int i = 0; i < 5; i++){
        arr_2.push_back(50);
    }
    for (int i = 0; i < arr_2.size(); i++){
        cout<<arr_2[i]<<" ";
    }
    cout<<endl;
    arr_2[3] = 300;
    arr_2[5] = 500;
    arr_2[7] = 700;

    vector<int>::iterator it;
    for (it = arr_2.begin(); it < arr_2.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    it = arr_2.begin();
    arr_2.insert(it + 3, 1234);
    it = arr_2.begin();
    arr_2.insert(it + 7, 4321);

    for (auto item : arr_2){
        cout<<item<<" ";
    }


}
