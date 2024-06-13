#include<iostream>
using namespace std;
//armstrong number(sum of cubes of digits)
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    int num=number;

    int dig1=num%10;
    num=num/10;
    cout<<"The first digit is: "<<dig1<<endl;
    cout<<"Cube of the first digit is: "<<dig1*dig1*dig1<<endl;
    int dig2=num%10;    
    num=num/10;
    cout<<"The second digit is: "<<dig2<<endl;
    cout<<"Cube of the second digit is: "<<dig2*dig2*dig2<<endl;
    int dig3=num%10;
    num=num/10;
    cout<<"The third digit is: "<<dig3<<endl;
    cout<<"Cube of the third digit is: "<<dig3*dig3*dig3<<endl;

    int sum=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
     
     if(sum==number){
         cout<<"The armstrong number is: "<<sum;
     }
     else{
         cout<<"The number is not armstrong number.";
     }
    cout<<sum;

    











   // return 0;

}