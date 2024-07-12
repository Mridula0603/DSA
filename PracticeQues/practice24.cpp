#include<iostream>
using namespace std;
//max SubArray sum
//1. Brute Force

void maxsum1(int arr[],int n){
      int maxsum1=INT16_MIN;
    for(int start=0;start<n;start++){
          for(int end=start;end<n;end++){
             int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];
            }
            cout<<currsum<<" ";
            maxsum1= max(maxsum1,currsum);
          }
        cout<<endl;
    }
    cout<<"maximum sub array sum= "<<maxsum1;
    }
    //2. slightly optimized brute force: O(n^2)

    void maxsum2(int arr[],int n){
         int maxsum2=INT16_MIN;
    for(int start=0;start<n;start++){
          int currsum=0;
          for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum2=max(maxsum2,currsum);   
    }
    cout<<endl;
    }
    cout<<"maximum sub array sum= "<<maxsum2;
    }

    //3.Kadane's algorithm

    void maxsum3(int arr[],int n){
        int currsum=0;
        int maxsum=INT16_MIN;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            maxsum= max(maxsum,currsum);

            if(currsum<0){
                currsum=0;
            }
        }
        cout<<"maximum sub array sum= "<<maxsum;
    }
    int main(){
        int arr[]={2,-3,6,-5,4,2};
        int n=sizeof(arr)/sizeof(int);
        maxsum1(arr,n);
        maxsum2(arr,n);
        maxsum3(arr,n);
    }