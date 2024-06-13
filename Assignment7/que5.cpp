#include<iostream>
using namespace std;

char aplha(char ch){
    if(ch=='z'){
        return 'a';
    }
    return ch+1;
}
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<aplha(ch);
    return 0;
}