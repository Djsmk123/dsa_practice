#include<iostream>
#include<vector>
using namespace std;

//stable sorting algorithm
void sort(vector<int> &arr,int i)
{
    if(arr[i]>arr[i+1])
    {
        int tmp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=tmp;
    }
}
int main(){
    vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
      for(int i=0; i<arr.size(); i++)
       {
        for(int j=0; j<arr.size()-i; j++)
         sort(arr,j);
       }
   for(auto x:arr)
   cout<<x<<" ";

    

}