#include<iostream>
#include<string>
using namespace std;
// oops concept // class,objects, properties, methods,encapsulation,constructors.

class Car{
    string name;
    string color;
public:
Car(string nameval,string colorval){
    name= nameval;
    color= colorval;
    cout<<"This is a constructor, which is called when an object is created."<<endl;
}
void start(){
    cout<<"car is started."<<endl;
}
void stop(){
    cout<<"car is stopped."<<endl;
}
//getters
string getproperties(){
    cout<<name<<","<<color<<endl;
}
};

int main(){
    Car c1("BMW","Blue");//object created
    c1.getproperties();
    c1.start();
    c1.stop();
}