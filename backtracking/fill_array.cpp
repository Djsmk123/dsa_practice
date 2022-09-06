#include<bits/stdc++.h>
using namespace std;
void printArray(vector<int> arr){
     for(auto x:arr)
        {
            cout<<x<<" ";
        }
        cout<<endl;
}
void fill(vector<int> &arr,int i,int n,int val){
    //base case
    if(i==n)
    {
        //print array
       printArray(arr);
       return;

    }
    //rec case
    arr[i]=val;
    fill(arr,i+1,n,val+1);

    //backtracking
    arr[i]=arr[i]*(-1);

}
int main(){
    int n;
    cin>>n;
     vector<int> arr(n,0);
    fill(arr,0,n,1);
     printArray(arr);
}