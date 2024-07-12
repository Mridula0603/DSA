#include<iostream>
using namespace std;

void MaxSubArr_Sum(int arr[],int n){
    int maxSum= INT32_MIN;
for(int start=0;start<n;start++){
      
    for(int end=start;end<n;end++){

            int currSum=0;
        for(int i=start;i<=end;i++){
            currSum+=arr[i];
        }
        cout<<currSum<<" ";
        cout<<",";
        maxSum=max(maxSum,currSum);
    }
     cout<<endl;
}
 cout<<"Maximum SubArray Sum = "<<maxSum<<endl;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    MaxSubArr_Sum(arr,n);
return 0;
}