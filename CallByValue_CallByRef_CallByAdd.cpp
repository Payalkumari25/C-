#include<iostream>
using namespace std;

void callByValue(int x, int y){

    int z = x;
    x = y;
    y = z;
}

void callByRef(int &x,int &y){

    int z = x;
    x = y;
    y = z;
}

void callByAdd(int *x,int *y){

    int z = *x;
    *x = *y;
    *y = z;
}



int main(){

    int a = 5;
    int b = 6;
    cout<<"Before swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl;
    //callByValue(a,b);
    //callByRef(a,b);
    callByAdd(&a,&b);
    cout<<"After swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl;

    return 0;
}