#include<iostream>
using namespace std;

void SubArrays(int *arr, int n){
    for (int start=0;start<n;start++){

        for(int end=start;end<n;end++){

            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
           cout<<",";
            //  cout<<arr[start]<<","<<arr[end]<<"  ";
        }
          cout<<endl;
    }
}

int main(){
    int arr[]={3,6,2,5,7};
    int n = sizeof(arr)/sizeof(int);
    SubArrays(arr,n);
}