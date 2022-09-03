#include<bits/stdc++.h>
using namespace std; 

int partitions(vector<int> &a, int s, int e)
{
   int pivot=a[e];
   int i=s-1;
   for(int j=s; j<e; j++)
   {
    if(a[j]<pivot)
    {
        i++;
        swap(a[i],a[j]);
    }
   }
   swap(a[i+1],a[e]);
   return i+1;

}
int quickSort(vector<int>&a,int s,int e)
{ 
    //base case
    if(s>=e)
    return;
    int p=partitions(a,s,e);
    //left part 
    quickSort(a,s,p-1);

    //right part
    quickSort(a,p+1,e);


}


int main(){
    vector<int> array={1,23,4,34,22,23,1231,4,12,3,123,25};
    quickSort(array,0,array.size()-1);
    for(auto x: array)
    cout<<x<<"  ";

    return 0;
}