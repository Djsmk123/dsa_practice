
#include<bits/stdc++.h>
using namespace std;

//stable sorting algorithm
int main(){
    vector<int> arr={ 1,4,5,62,23,123,34,123,4,231,234,5657,12314,412,1,324,590};
      for(int i=0; i<arr.size(); i++)
       {
        for(int j=0; j<arr.size()-i; j++)
         {
              if(arr[i]>arr[i+1])
              swap(arr[j],arr[j+1]);
         }
       }
   for(auto x:arr)
   cout<<x<<" ";

    

}