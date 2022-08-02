#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&arr)
{
    for(int i=1; i<arr.size(); i++)
    {
     int current=arr[i];
     int prev=i-1;
     while(prev>=0 and arr[prev]>current)   
     {
        arr[prev+1]=arr[prev];
        prev=prev-1;

     }
     arr[prev+1]=current;
    }

}
int main(){
     vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
     insertion_sort(arr);
     for(auto x:arr)
     {
        cout<<x<<" ";
     }
}