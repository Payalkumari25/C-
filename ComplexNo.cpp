#include<iostream>
using namespace std;

class ComplexNumber {

    private:
    int real;
    float imaginary;

    public:

    ComplexNumber(){

    }
    ComplexNumber(int r, int i){
        real = r;
        imaginary = i;
    }
    void display() {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }

    int getReal() { 
        return real; 
    }
    int getImaginary() { 
        return imaginary;
    }
};

ComplexNumber add(ComplexNumber n1, ComplexNumber n2){

    int r;
    float i;
    r = n1.getReal() + n2.getReal();
    i = n1.getImaginary() + n2.getImaginary();
    ComplexNumber temp(r,i);
    return temp; //return object
}

int main(){

    ComplexNumber comp1(5,8), comp2(10,30),comp3;
    comp1.display();
    comp2.display();
    cout<<"Addition of comp1 & comp2"<<endl;
    comp3 = add(comp1,comp2); // passing object to function
    comp3.display();

    cout<<"Pointer to object"<<endl;
    ComplexNumber *ptr;
    ptr = &comp3;
    ptr->display();
    ptr = &comp1;
    ptr->display();

    return 0;
}