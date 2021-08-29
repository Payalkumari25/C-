#include<iostream>
#include<fstream>
using namespace std;

int main(){

    
    char arr[100];
    cout<<"Enter the name and age"<<endl;
    cin.getline(arr,100);

    //For write opeartions
    //ofstream myfile("xyz.txt");
    //ios::app(append)/ate(end of the file)/out(write something to the file)
    //ofstream myfile("xyz.txt",ios::app);
    fstream myfile("xyz.txt",ios::out | ios::app);

    myfile<<arr;
    myfile.close();
    cout<<"File write operation performed successfully"<<endl;

    //For read opeartions
    cout<<"Reading from file operation started"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"Array content: "<<arr1<<endl;
    cout<<"File read opeation completed"<<endl;
    obj.close();

    //Append 

    return 0;

}