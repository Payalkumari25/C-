#include <iostream>
using namespace std;

class baseClass
{
public:
    void show()
    {
        cout << "Base class show function" << endl;
    }
    virtual void print()
    {
        cout << "Base class print function" << endl;
    }
};

class DerivedClass : public baseClass
{

    void show()
    {
        cout << "Derived class show function" << endl;
    }
    void print()
    {
        cout << "Derived class print function" << endl;
    }
};

int main()
{

    baseClass *baseptr;
    DerivedClass derivedObj;
    baseptr = &derivedObj;

    //Run time polymorphism
    baseptr->print(); //Derived class print function
    baseptr->show();  // Base class show function
}