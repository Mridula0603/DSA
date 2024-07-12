#include<iostream>
using namespace std;
//counting sort

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void countSort(int arr[],int n){
        int freq[100000];
        int minval=INT16_MAX, maxval=INT16_MIN;

        //1st
        for(int i=1;i<n;i++){
            minval=min(minval,arr[i]);
            maxval=max(maxval,arr[i]);
        }
        //2nd
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        //3rd
        for(int i=minval,j=0;i<=maxval;i++){
            while(freq[i]>0){
                arr[j++]=i;
                freq[i]--;
            }
        }
        print(arr,n);
}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n =sizeof(arr)/sizeof(int);
    countSort(arr,n);
}