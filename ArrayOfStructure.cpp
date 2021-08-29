#include<iostream>
#include<string>
using namespace std;

struct Person{

    string name;
    int age;
    double salary;
};

int main(){

    Person p[2];

    cout<<"Enter the details like name,age,salary"<<endl;
    for(int i=0;i<2;i++){

        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }

    for(int i=0;i<2;i++){
        cout<<"details of person "<<(i+1)<<endl;
        cout<<"Name: "<<p[i].name<<endl;
        cout<<"Age: "<<p[i].age<<endl;
        cout<<"Salary: "<<p[i].salary<<endl;
    }

    return 0;
}