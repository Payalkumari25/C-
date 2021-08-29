#include<iostream>
using namespace std;

struct Person {

    char name[100];
    int age;
    int salary;
};

int main(){

    Person p;

    cout<<"Person details"<<endl;
    cout<<"Enter the name";
    cin.getline(p.name,100);
    cout<<endl<<"Enter the age";
    cin>>p.age;
    cout<<endl<<"Enter the salary";
    cin>>p.salary;

    cout<<"Person details"<<endl;
    cout<<p.name<<endl;
    cout<<p.age<<endl;
    cout<<p.salary<<endl;

    return 0;
}