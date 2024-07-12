#include<iostream>
using namespace std;

void maxSubArrSum2(int arr[],int n){
    int maxSum= INT32_MIN;
    for(int start=0; start<n;start++){
          int currSum=0;
          for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
          }
         cout<<endl;
    }  
    cout<<"Max Sum of subArrays= "<<maxSum<<" ";
    cout<<endl;
}

//Kadane's Algorithm
void maxSubArrSum3(int arr[],int n){
    int maxSum= INT32_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        //important logic
        if(currSum<0){
            currSum=0;
        }
    } 
      cout<<"Max Sum of subArrays= "<<maxSum<<" ";
      cout<<endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSubArrSum2(arr,n);
    maxSubArrSum3(arr,n);
    return 0;
}