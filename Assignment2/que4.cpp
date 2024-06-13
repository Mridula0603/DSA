#include<iostream>
using namespace std;
#define PI 3.14
//area of a circle
int main(){
    int r;
    cout<<"Enter the Radius of a circle: ";
    cin>>r;
    float area=PI*r*r;
    cout<<"Area of a circle is: "<<area;
    return 0;
}