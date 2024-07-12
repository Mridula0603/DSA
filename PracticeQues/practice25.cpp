#include<iostream>
using namespace std;
//buy and sell stock

void maxprofit(int arr[],int n){
    int currprofit=0;
    int maxprofit=0;
    for(int i=n-1;i>0;i--){
        int sellprice=arr[i];
        for(int j=n-i-1;j>0;j--){
            int buprice=arr[j];
            currprofit= arr[i]-arr[j];
            maxprofit=max(maxprofit,currprofit);
        }
        cout<<endl;
    }
    cout<<"maximum profit= "<<maxprofit;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxprofit(arr,n);
}