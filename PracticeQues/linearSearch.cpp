#include<iostream>
using namespace std;
// Linear Search using a function;

int linearSearch(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Key = "<<key<<" found at index "<<i<<endl;
            break;
        }
        else{
            cout<<"Key = "<<key<<" not found"<<endl;
            break;
        }
    } 
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the Key = ";
    cin>>key;
    linearSearch(arr,n,key);

    return 0;
}




















// int main(){
//     int arr[]={2,4,6,8,10,12,14,16};
//     int n= sizeof(arr)/sizeof(int);
//     int key =10;
//     for( int i=0;i<n;i++){
//         if((arr[i])==key){
//            cout<<"Key = 10 found at index "<<i<<endl;
//            break;
//     }
// }
// return 0;
// }