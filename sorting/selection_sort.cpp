#include<iostream>
#include<vector>
using namespace std;

//unstable sorting algorithm
void selection_sort(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {

         //finding minimum index and replace it with its correct index
        int min_idx=i;
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[j]<arr[min_idx])
            min_idx=j;
        }
        //swapping
         int tmp=arr[min_idx];
         arr[min_idx]=arr[i];
         arr[i]=tmp;
    }
}

int main(){
    vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
    selection_sort(arr);
   for(auto x:arr)
   cout<<x<<" ";
}