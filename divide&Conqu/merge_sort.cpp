#include<bits/stdc++.h>
using namespace std; 

void merge(vector<int>& arr,int s,int e){
  int i=s;
  int m=s+(e-s)/2;
  int j=m+1;
  vector<int> tmp;
  while(i<=m && j<=e)
  {
     if(arr[i]<arr[j])
     {
        tmp.push_back(i);
        i++;
     }
      else{

      tmp.push_back(j);
        j++;
     } 
  }

  //copy remaining elements from first array

  while(i<=m)
  {
    tmp.push_back(i);
        i++;
  }
  //copy remaining elements from second array
  while(j<=e)
  {
    tmp.push_back(j);
    j++;
  }
  int k=0;
  for(int idx=s; i<=e; i++)
  {
    arr[idx]=tmp[k++];

  }
  return;

}
void merge_sort(vector<int>& arr,int s,int e){
   ///base case
   if(s>=e)
   return;
   int mid=s+(e-s)/2;
   // left part sort
   merge_sort(arr,s,mid);
   

   //right part sort

   merge_sort(arr,mid+1,e);
   return merge(arr,s,e);


}
int main(){
    vector<int> array={1,23,4,34,22,23,1231,4,12,3,123,25};
    merge_sort(array,0,array.size()-1);
    for(auto x: array)
    cout<<x<<"  ";

    return 0;
}