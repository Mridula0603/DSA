#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//valid palindrome for strings

bool checkPalindrome(char word[],int n){
        int st=0,end=n-1;
        while(st<=end){
            if(word[st++]!=word[end--]){
                 cout<<"Not a palindrome"<<endl;
                return false;
            } 
        } 
        cout<<"Palindrome"<<endl;
        return true;       
}
int main(){
    char word[]="racecar";
    int n= strlen(word);
    checkPalindrome(word,n);

}