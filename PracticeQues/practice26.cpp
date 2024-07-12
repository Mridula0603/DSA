#include<iostream>
using namespace std;
//trapping rainwater

void trappingwater(int arr[],int n){
    int leftmax[n];
    int rightmax[n];
    //leftmax array
    leftmax[0]=arr[0];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],arr[i]);
    }
    cout<<"leftmax array: ";
    for(int i=0;i<n;i++){
        cout<<leftmax[i]<<" ";
    }cout<<endl;
    //rightmax array
    rightmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i]);
    }
    cout<<"rightmax array: ";
    for(int i=0;i<n;i++){
        cout<<rightmax[i]<<" ";
    }cout<<endl;
    //result
    int result=0;
    for(int i=0;i<n;i++){
        result+=min(leftmax[i],rightmax[i])-arr[i];
    }
    cout<<"trapped water= "<<result;
}
int main(){
    int arr[]={4,2,0,6,3,2,5};
    int n=sizeof(arr)/sizeof(int);
    trappingwater(arr,n);

}