#include<iostream>
#include<vector>
using namespace std;
//pair sum
//O(n^2)
vector<int> PrintSum1(vector<int> vec,int sum){
   
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
              if(vec[i]+vec[j]==sum){
                cout<<i<<","<<j<<endl;
              }
            //   else{
            //     continue;
            //   }
        }
    }
    cout<<endl;
}

//optimized approach
vector<int> PrintSum2(vector<int> vec,int target){
    int st=0,end= vec.size()-1;
    int currsum=0;
    vector<int> ans;
    while(st<end){
         currsum= vec[st]+vec[end];
         if(currsum==target){
            // cout<<"Pair Found= "<<st<<","<<end<<endl;
            ans.push_back(st);
            ans.push_back(end);
            return ans;
         }
         else if(currsum>target){
            end--;
         }
         else{
            st++;
         }
    }
    return ans;
}
int main(){
    vector<int> v={2,5,7,11,15};
    vector<int> ans= PrintSum2(v,9);
    cout<<ans[0]<<","<<ans[1]<<endl;
}