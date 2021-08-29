#include<iostream>
#include<string>
using namespace std;

class Car{

    private:
    string Car_name;
    string Car_brand;
    int Car_price;

    public:
    void setData(string name, string brand, int price){
        Car_name = name;
        Car_brand = brand;
        Car_price = price;
    }

    void display(){
        cout<<"Car_name: "<<Car_name<<endl;
        cout<<"Brand: "<<Car_brand<<endl;
        cout<<"Price: "<<Car_price<<endl;
    }
};

int main(){

    Car obj;
    obj.setData("Audi","Top",3000000);
    obj.display();

    return 0;
}