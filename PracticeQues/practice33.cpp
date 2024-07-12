#include<iostream>
using namespace std;
//search in Sorted Matrix

//brute force(search for our key in whole matrix)
int BruteforceSearch(int mat[][4],int n,int key){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==key){
                cout<<"Key found at index "<<i<<","<<j<<endl;
            }
        }
     }
}
//row wise binary search
int BinarySearchMatrix(int mat[][4],int n,int key){
    //finding row
     for(int i=0;i<n;i++){
        int st=0,end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(mat[i][mid]==key){
                cout<<"Key found at index "<<i<<","<<mid<<endl;
                return 1;
            }
            else if(mat[i][mid]>key){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
    }
    cout<<"Key not found"<<endl;
    return 0;
}
//T.C = O(n+m)......The Best Approach
bool staircaseApproach(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    for(int i=0;i<n;i++){
        while(i<n && j>=0){
            if(mat[i][j]==key){
                cout<<"Key found at index ("<<i<<","<<j<<")\n";
                return true;
            }
            else if(mat[i][j]>key){
                //left
                j--;
            }
            else{
                //down
                i++;
            }
        }
    }
    cout<<"Key not found"<<endl;
    return false;
}
int main(){
    int mat[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n=4;
     BruteforceSearch(mat,n,33);
     BinarySearchMatrix(mat,n,35);
    staircaseApproach(mat,n,4,33);
    
}