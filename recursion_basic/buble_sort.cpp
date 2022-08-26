
#include<bits/stdc++.h>
using namespace std; 
void bubble_sort_rec(vector<int> &arr,int n,int j)
{
    if(n==1 || n==0)
    {
        return;
    }
    if(j==n-1)
    {
        bubble_sort_rec(arr,n-1,0);
        return;
    }
    if(arr[j]>arr[j+1])
    {
     swap(arr[j],arr[j+1]);

    }
    bubble_sort_rec(arr,n,j+1);


    

}
int main(){
    vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
    bubble_sort_rec(arr,arr.size(),0);
   for(auto x:arr)
   cout<<x<<" ";

    

}