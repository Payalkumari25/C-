#include<iostream>
using namespace std;

class Car{

    private:
    string company_name;
    string model_name;
    double price;

    public:

    //Default constructor
    Car(){
       cout<<"Default constructor"<<endl;
    }
    // Parameterized Constructor
    Car(string companyName, string modelName,double Price){
        cout<<"Parameterized constructor"<<endl;
        company_name = companyName;
        model_name = modelName;
        price = Price;
    }
    // Copy constructor
    Car(Car &obj){
        cout<<"Copy constructor"<<endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        price = obj.price;
    }

    void setData(string companyName, string modelName,double Price){

        company_name = companyName;
        model_name = modelName;
        price = Price;
    }

    void display(){

        cout<<"Company Name: "<<company_name<<endl;
        cout<<"Model Name: "<<model_name<<endl;
        cout<<"Price: "<<price<<endl<<endl;
    }
    //Destructor
    ~Car(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    Car c1,c2("Alia","BMW",900000);
    c1.setData("Payal","Audi",800000);
    c1.display();
    c2.display();
    Car c3 = c1; //Copy constructor
    c3.display();

    return 0;
}