#include<iostream> 
using namespace std;
// coverting binary to decimal
//converting decimal to binary

void BinTODec(int bin_num){
     int n=bin_num;
     int dec_num=0;
     int pow=1;//2^0,2^1,2^2.......
    while(n>0){
        int lastdig=n%10;
        dec_num+=lastdig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<dec_num<<endl;
}
    void DecToBin(int dec_num){
       int n=dec_num;
       int bin_num=0;
       int pow=1;

       while(n>0){
        int lastDig=n%2;
        bin_num= bin_num+ lastDig*pow;
        pow=pow*10;
        n=n/2;
       }
       cout<<bin_num<<endl;
 
}

int main(){
    BinTODec(10100001);
    DecToBin(456);
    return 0;
}