#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//conver to upper case: char array

void toUpperCase(char word[], int n){
     for(int i=0;i<n;i++){
        char ch = word[i];
        if( ch>='A'&& ch<='Z'){
            continue;
        }
        else{
            word[i]= ch-'a'+'A';
        }
     }
    }
    int main(){
        char word[]="ApPle";
        // int n = strlen(word);
        toUpperCase(word, strlen(word));

        cout<<word<<endl;
        return 0;
    }