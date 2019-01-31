#include <iostream>
#include <cstring>
using namespace std;

class Test
{
private:
    char *string;
public:
    Test(char *str)
    {
        int len;
        len = strlen(str) + 1;
        string = new char[len];
        strcpy(string, str);
    }
    Test()
    {
        string = NULL;
    }
    void SetString(char *str)
    {
    string = str;
    }
    void Flip()
    {
        int len;
        char *temp;
        len = strlen(string) + 1;
        temp = new char[len];
        strcpy(temp, string);
        for (int i = 0; i < len; i++){
            *(string + i) = *(temp + len - 2 - i);
        }
    }

    void Show()
    {
        int len; 
        len = strlen(string);
        for (int i = 0; i < len; i++){
            cout<<*(string + i);
        }
        cout<<endl;
    }

    void ShowFlip()
    {
        int len;
        len = strlen(string);
        Flip();
        for (int i = 0; i < len; i++){
            cout<<*(string + i);
        }
        cout<<endl;
    }
};



int main()
{
    Test namearr[5];
    char name[100];
    char *strptr;
    int len;
    for (int i = 0; i < 5; i++){
        cin>>name;
        len = strlen(name) + 1;
        strptr = new char[len];
        strcpy(strptr, name);
        namearr[i].SetString(strptr);
    }
    for (int j = 0; j < 5; j++){
        namearr[j].Show();
        namearr[j].ShowFlip();
    }
    return 0;
}



        
       
