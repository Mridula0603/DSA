#include<iostream>
using namespace std;
//SI calculator
int main(){
    float P,R,T;
    cout<<"Enter the Principal: ";
    cin>>P;
    cout<<"Enter the Rate of interest: ";
    cin>>R;
    cout<<"Enter the Time period: ";
    cin>>T;
    // cin>>P>>R>>T;
    float SI= (P*R*T)/100;
    cout<<"The Simple interest on the principal is "<<SI;
    return 0;
}