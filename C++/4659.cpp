//WRONG
#include <iostream>
#include <cstring>
using namespace std;
class Password
{
private:
    char *input;
    int len;
public:
    Password(char *arr)
    {
        len = strlen(arr);
        input = new char[len + 1];
        strcpy(input, arr);
    }
    bool is_vowel(char a)
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') return true;
        else
            return false;
    }
    bool are_same(char x, char y)
    {
        if (x != y || (x == 'e'&& y == 'e') || (x == 'o' && y == 'o')) return false;
        else
            return true;
    }
    bool is_acceptable()
    {
        int vowel_index = 0, cons_index = 0, vowel_flag = 0;
        if (len == 1){
            if (is_vowel(*(input))){
                return true;
            }
            else{
                cout<<"Case 1"<<endl;
                return false;
            }
        }
        else{
            for (int i = 1; i < len; i++){
                if (are_same(*(input + i - 1), *(input + i))){
                    cout<<"Case 2"<<endl;
                    return false;
                }
                else{
                    if (is_vowel(*(input + i))){
                        vowel_index++;
                        vowel_flag = 1;
                        cons_index = 0;
                    }
                    else{
                        vowel_index = 0;
                        cons_index++;
                    }
                    if (vowel_index == 2 || cons_index == 2){
                        cout<<"Case 3"<<endl;
                        return false;
                    }
                }
            }
            if (vowel_flag == 0){
                cout<<"Case 4"<<endl;
                return false;
            }
            else
                return true;
        }
    }
    void answer()
    {
        if (is_acceptable()){
            cout<<"<"<<input<<"> is acceptable."<<endl;
        }
        else
            cout<<"<"<<input<<"> is not acceptable."<<endl;
    }
};

int main()
{
    char arr[20];
    cin>>arr;
    while (strcmp(arr, "end") != 0){
        Password obj(arr);
        obj.answer();
        cin>>arr;
    }
    return 0;
}












