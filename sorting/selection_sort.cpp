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

// find minimum index using recursion
int minIndex(vector<int>&  arr,int i,int j)
{
    if(i==j)
    return i;
    int k=minIndex(arr,i+1,j);
    return (arr[i]<arr[k])?i:k;
}

//using recursion
void recurSelectionSort(vector<int>&arr, int n, int index = 0)
{
    // Return when starting and size are same
    if (index == n)
       return;
 
    // calling minimum index function for minimum index
    int k = minIndex(arr, index, n-1);
 
    // Swapping when index and minimum index are not same
    if (k != index)
       swap(arr[k], arr[index]);
 
    // Recursively calling selection sort function
    recurSelectionSort(arr, n, index + 1);
}




int main(){
    vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
    //selection_sort(arr);
    recurSelectionSort(arr,arr.size());
   for(auto x:arr)
   cout<<x<<" ";
}