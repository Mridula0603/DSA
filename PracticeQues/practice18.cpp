#include<iostream>
using namespace std;

int main(){
    // Declaring Array
    // int marks[50];
    // char mark[50];

    // cout<<sizeof(marks)<<endl;
    // cout<<sizeof(mark)<<endl;
    // cout<<sizeof(marks)/sizeof(mark)<<endl;

      int n;
      cout<<"Enter the size of array: ";
      cin>>n;

      int arr[n];
      for(int i=0;i<=n-1;i++){
        cin>>arr[i];
      }

      for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<",";
      }

    return 0;
}