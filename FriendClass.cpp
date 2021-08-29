#include<iostream>
using namespace std;

class myclass1{

    friend class myclass2;
    int x;
    public:
    myclass1(int x){
        this->x = x;
    }
};

class myclass2{

    public:
    void show(myclass1 obj){
        cout<<"Value of x is "<<obj.x;
    }

};

int main(){

    myclass1 obj1(10);
    myclass2 obj2;
    obj2.show(obj1);

    return 0;
}