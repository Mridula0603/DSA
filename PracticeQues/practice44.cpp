#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;
    public:
    string username;
    User(int id){
        this->id=id;
    }
    //setters
     void setpassword(string password){
        this->password=password;
    }
    //getters
    string getpassword(){
        return password;
    }
};
int main(){
    User u1(102219027);
    u1.username="Mridula";
    u1.setpassword("wisdom");
    // u1.getpassword();

    cout<<"Username: "<<u1.username<<endl;
    cout<<"Password: "<<u1.getpassword()<<endl;
    
    return 0;
    }