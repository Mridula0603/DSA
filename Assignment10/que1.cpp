#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    bool val=false;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                val=true;
                break;
            }
        }
    }
    cout<<endl;
    cout<<"The array has duplicate elements: "<<val;
   
}