#include<iostream>
#include<string>
using namespace std;
//copy constructor

class Car{
    public:
    string name;
    string color;

Car(string name,string color){
     this->name= name;
     this->color= color;
    cout<<"This is an original constructor."<<endl;
}
//custom copy constructor
Car(Car &c){
    cout<<"This is a custom copy constructor."<<endl;
    name= c.name;
    color=c.color;
}
//getters

};

int main(){
    Car c1("BMW","Blue");//object created
    Car c2(c1);//copy constructor called

    cout<<c2.name<<","<<c2.color<<endl;
}