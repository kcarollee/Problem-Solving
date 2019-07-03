#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    int age;
    char name[50];
public:
    Person(int myAge, char *myName) : age(myAge)
    {
        strcpy(name, myName);
    }

    void printName() const
    {
        cout << "MY NAME IS " << name << endl;
    }

    void printAge() const
    {
        cout << "I'm " << age << " years old"<< endl;
    }
};

class Student : public Person
{
private:
    char major[50];
public:
    Student(char *myName, int myAge, char *myMajor) : Person(myAge, myName)
    {
        strcpy(major, myMajor);
    }

    void printStudentInfo() const
    {
        printName();
        printAge();
        cout << "My major is " << major << endl;
    }
};

int main()
{
    Student student("LEE", 22, "COMP SCI");
    student.printStudentInfo();

    return 0;
}
