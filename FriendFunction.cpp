#include<iostream>
using namespace std;

class Car {

    int meters =0;

    public:
    void display(){
        cout<<"Value of meters: "<< meters<<endl;
    }

    friend void addValue(Car &c);

};

void addValue(Car &c){

    c.meters = c.meters + 5;
}

int main(){

    Car c1;
    c1.display();  //Value of meters: 0

    //Call by reference
    addValue(c1);
    cout<<endl;
    c1.display(); //Value of meters: 5
    return 0;
}