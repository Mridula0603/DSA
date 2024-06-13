#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    bool num=true;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num=!num;
      }
      cout<<endl;
}
}
//doubt