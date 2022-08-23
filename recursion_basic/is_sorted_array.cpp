#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
     if(n==1 or n==0)
     return true;
     if(arr[0]<arr[1] and isSorted(arr+1,n-1))
     return true;
     return false;
}
bool isSorted2(int arr[],int n ,int i){
    if(i==n-1)
    return true;
    if(arr[i]<arr[i+1] && isSorted2(arr,n,i+1))
    return true;
    return false;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted2(arr,n,0);
}