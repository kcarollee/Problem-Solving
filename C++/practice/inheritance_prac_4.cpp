#include <iostream>
using namespace std;

class Base
{
private:
	int baseNum;
public:
	Base() : baseNum(20)
	{
		cout << "Constructor of Base called" << endl;
	}

	Base(int n) : baseNum(n)
	{
		cout << "Second Constructor of Base called" << endl;
	}

	void showBaseData()
	{
		cout << baseNum << endl;
	}
};

class Derived : public Base
{
private:
	int derivedNum;
public:
	Derived() : derivedNum(30)
	{
		cout << "First Constructor of Derived called" << endl;
	}

	Derived(int n) : derivedNum(n)
	{
		cout << "Second Constructor of Derived called" << endl;
	}

	Derived(int n1, int n2) : Base(n1), derivedNum(n2)
	{
		cout << "Third Constructor of Derived called" << endl;
	}

	void showDerivedData()
	{
		showBaseData();
		cout << derivedNum << endl;
	}
};

int main()
{
	cout << "case 1: ---------------------" << endl;
	Derived *derived = new Derived();
	derived->showDerivedData();


	return 0;
}
