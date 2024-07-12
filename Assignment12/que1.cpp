#include<iostream>
using namespace std;

int count7(int arr[2][3],int n, int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(arr[i][j]==7){
            count++;
          }
          else{
            continue;
          }
        }
    }
    cout<<count;
}
int main(){
    int arr[2][3]={{4,7,8},{8,8,7}};
    count7(arr,2,3);
}
