#include<iostream>
using namespace std;

void maxProfit(int arr[],int n){
    int maxprofit=0;
    int currProfit=0;
    for(int i=n-1;i>=0;i--){
        int sellPrice=arr[i];
        for(int j=i-1;j>=0;j--){
            int buyPrice=arr[j];
            currProfit=sellPrice-buyPrice;
            maxprofit=max(maxprofit,currProfit);
        }
        cout<<endl;
    }
    cout<<"Max Profit= "<<maxprofit;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int n= sizeof(arr)/sizeof(int);
    maxProfit(arr,n);
}