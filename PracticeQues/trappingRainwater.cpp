#include<iostream>
using namespace std;

void trappedWater(int height[],int n){
    int left[20000];
    int right[20000];
    int water=0;

    left[0]=height[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],height[i]);
    }
    right[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],height[i]);
    }
    for(int i=0;i<n;i++){
        water+= min(left[i],right[i])-height[i];
    }
    cout<<"Trapped water= "<<water<<" ";
    cout<<endl;

}

int main(){
    int height[]={4,2,0,6,3,2,5};
    int n= sizeof(height)/sizeof(int);
    trappedWater(height,n);

}