#include<iostream>
using namespace std;


int add(int a, int b){
    cout<<"function 1"<<endl;
    return a + b;
}

double add(double a, double b){
    cout<<"function 2"<<endl;
    return a + b;
}

double add(int  a,int b, int c){
    cout<<"function 3"<<endl;
    return a + b + c;
}

double add(int a, double b){
    cout<<"function 4"<<endl;
    return a + b;
}

double add(double a, int b){
    cout<<"function 5"<<endl;
    return a + b;
}


int main(){

    cout<<add(2,5)<<endl;
    cout<<add(20.5,50.6)<<endl;
    cout<<add(2,5,10)<<endl;
    cout<<add(2,80.5)<<endl;
    cout<<add(90.5,5)<<endl;

    return 0;
}