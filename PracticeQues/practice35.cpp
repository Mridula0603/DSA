#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//reverse an array

int main(){
    char word[50]="mridula";
    // cin>>word;
    // cout<<"Your word is: "<<word<<endl;
    int n= strlen(word);
    for(int i=0;i<n;i++){
        int st=0,end=n-1;
        while(st<=end){
            swap(word[st],word[end]);
            st++;
            end--;
        } 
    }
    cout<<"The reverse ofyour word is: "<<word<<endl;
}