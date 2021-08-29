#include <iostream>
using namespace std;

class Complex
{

private:
    float r, i;

public:
    complex(float r, float i)
    {
        this->r = r;
        this->i = i;
    }
    void display()
    {
        cout << "real part " << r << endl;
        cout << "img part " << i << endl;
    }
    Complex operator+(Complex c)
    {
        int temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }
}

int
main()
{

    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c = c1 + c2;
    c.display();
}