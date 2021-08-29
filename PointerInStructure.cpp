#include<iostream>
using namespace std;

struct Person{

    string name;
    int age;
    int salary;
};

int main(){

    Person p1;
    cout<<"Enter details of a person"<<endl;

    Person *ptr = &p1;
    cin>>ptr->name;
    cin>>ptr->age;
    cin>>ptr->salary;

    cout<<"Details of a person"<<endl;
    cout<<"name"<<ptr->name<<endl;
    cout<<"age"<<ptr->age<<endl;
    cout<<"salary"<<ptr->salary<<endl;


    return 0;
}