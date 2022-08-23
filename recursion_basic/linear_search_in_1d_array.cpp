#include<bits/stdc++.h>
using namespace std;
int firstOcr(vector<int>arr,int i,int target){
    return arr[i]==target?i:(i<arr.size()?firstOcr(arr,++i,target):-1);
    
}
int lasOcr(vector<int> arr,int n,int target,int ans=-1){

    return arr[n]==target?n:(n>0?lasOcr(arr,--n,target):-1);


}
// all occurence binary search

vector<int> ans;


void occur(int k, vector<int> v,int index,int end)

{

    if(index==end)

    return;

   

    if(v[index]==k)

    ans.push_back(index);

   

    occur(k,v,index+1,end);

   

}
vector<int> findAllOccurences(int k, vector<int> v){
    ans.clear();
    occur(k,v,0,v.size());
    return ans;
}

int main(){
    vector<int> arr={
        1,2,3,4,1,2,3,4,1,2,3,4
    };
    
    vector<int> ans=findAllOccurences(2,arr);
    for(auto x:ans)
    cout<<x<<" ";
    cout<<endl;
  // cout<<"first : "<<firstOcr(arr,0,target)<<" last : "<<lasOcr(arr,arr.size()-1,target);
    
}