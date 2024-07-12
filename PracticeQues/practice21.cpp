#include<iostream>
using namespace std;
//reverse an array
//with extra space

void reverse1(int arr[],int n){
    int copyarr[n];
    for(int i=0;i<n;i++){
       copyarr[i]=arr[n-i-1];
       cout<<copyarr[i]<<" ";
    }
}
//without extra space(by swapping 1st and last element)
void rev(int arr[],int n){
   int start=0;
   int end=n-1;
   while ((start<end))
   {
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
   cout<<endl;
    }


int main(){
    int arr[]={5,4,3,9,2};
    // int nums[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    // reverse1(arr,n);
    rev(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}