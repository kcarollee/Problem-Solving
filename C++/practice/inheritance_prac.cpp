#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    int age;
    char name[50];
public:
    Person(int myage, char *myname) : age(myage)
    {
        strcpy(name, myname);
    }
    void ShowName() const
    {
        cout<<"My name is "<<name<<endl;
    }
    void ShowAge() const
    {
        cout<<"I'm "<<age<<" years old"<<endl;
    }
};

class UnivStudent : public Person
{
private:
    char major[50];
public:
    UnivStudent(char *myname, int myage, char *mymajor) : Person(myage, myname)
    {
        strcpy(major, mymajor);
    }
    void ShowInfo()
    {
        ShowName();
        ShowAge();
        cout<<"My major is "<<major<<endl;
    }
};

int main()
{
    UnivStudent s_1("Karl", 22,"Computer Science" );
    s_1.ShowInfo();
    return 0;
}
