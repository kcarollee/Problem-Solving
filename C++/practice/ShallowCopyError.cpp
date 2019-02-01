#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char *name;
    int age;
public:
    Person(char *myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char [len];
        strcpy(name, myname);
        age = myage;
    }
    Person(const Person& copy) : age(copy.age)
    {
        name = new char[strlen(copy.name) + 1];
        strcpy(name, copy.name);
    }
    void Show() const
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
    ~Person()
    {
        delete []name;
        cout<<"Called destructor."<<endl;
    }
};

int main()
{
    Person man1("Karl lee", 23);
    Person man2 = man1;
    man1.Show();
    man2.Show();
    return 0;
}
