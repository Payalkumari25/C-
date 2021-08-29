#include <iostream>
using namespace std;

class Complex
{

private:
    int r, i;

public:
    Complex(){
        r =0;
        i=0;
    }
    Complex(int r, int i)
    {
        this->r = r;
        this->i = i;
    }
    void display()
    {
        cout << "real part " << r << endl;
        cout << "img part " << i << endl;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.r = r + c.r;
        temp.i = i + c.i;
        return temp;
    }
};

int
main()
{

    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;
    c3.display();
}