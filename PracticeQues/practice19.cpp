#include<iostream>
using namespace std;
//largest and smallest in array
int main(){
    int arr[]={4,6,8,9,20};
    int n= sizeof(arr)/sizeof(int);

    int max= arr[0];
    int min= arr[0];

    for(int i=0; i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }

    for(int i=0; i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"Largest= "<<max<<endl;
    cout<<"Smallest= "<<min<<endl;
    }