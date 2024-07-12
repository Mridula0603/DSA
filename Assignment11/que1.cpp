#include<iostream>
using namespace std;
//print array
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//bubble sort
void bubblesort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
}
//selection sort
void selectionsort(int arr[],int n){
      for(int i=0;i<n-1;i++){
        int minidx=i;
        for (int j=i+1;j<n-1;j++){
            if(arr[minidx]>arr[j]){
                swap(arr[minidx],arr[j]);
            }
        }
      }
      print(arr,n);
}
//insertion sort
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}
//counting sort
void countingsort(int arr[],int n){
    int minval=INT16_MAX,maxval=INT16_MIN;
    int freq[100000];
    for(int i=1;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }
    // int freq[maxval+1];
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main(){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The given array is: ";
    print(arr,n);
    cout<<endl;

    cout<<"After using bubble sort: ";
    bubblesort(arr,n);
    cout<<endl;

    cout<<"After using selection sort: ";
    selectionsort(arr,n);
    cout<<endl;

    cout<<"After using insertion sort: ";
    insertionsort(arr,n);
    cout<<endl;

    cout<<"After using counting sort: ";
    countingsort(arr,n);
    cout<<endl;
}