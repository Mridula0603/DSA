#include<iostream>
#include<vector>
using namespace std;
//vector implementation in memory

int main(){
    vector<int> vec1;
    cout<<vec1.size()<<endl;

    vector<int> vec2={1,2,3,4};
    cout<<vec2.size()<<endl;

    vector<int> vec3(5,-1);
    cout<<vec3.size()<<endl;
    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i]<<" ";
        
    }
    
}