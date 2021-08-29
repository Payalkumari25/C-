#include<iostream>
using namespace std;

int main(){

    int n;
    int *ptr;

    cout<<"Enter the size: ";
    cin>>n;

    ptr = new int[n];
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
}