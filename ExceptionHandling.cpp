#include<iostream>
using namespace std;

int main(){

    int num,den,res;
    cout<<"Enter num & den"<<endl;
    cin>>num>>den;

    try {

        if(den == 0){
            throw den;
        }
        res = num/den;
    }
    catch(int ex){
        cout<<"Divide by zero not allowed"<<ex;
    }
    cout<<"Division is: "<<res<<endl;

    return 0;
}