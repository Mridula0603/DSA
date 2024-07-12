#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4],int n,int m){
    int srow=0,scol=0,erow=n-1,ecol=m-1;
    while(srow<=erow && scol<=ecol){
        //Top boundary
        for(int i=scol; i<=ecol;i++){
            cout<<mat[srow][i]<<" ";
        }
        //Right Boundary
        for(int i=srow+1; i<=erow;i++){
            cout<<mat[i][ecol]<<" ";
        }
        //Bottom Boundary
        for(int i=ecol-1; i>=scol;i--){
            if(srow==erow){//we are on middle boundary
                break;
            }
            cout<<mat[erow][i]<<" ";
        }
        //left Boundary
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol){//we are on middle boundary
                break;
            }
            cout<<mat[i][scol]<<" ";
        }
        srow++;
        ecol--;
        erow--;
        scol++;   
    }
    cout<<endl;
}
    int main(){
    int n=4,m=4;
    int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiralMatrix(mat,n,m);
    }
