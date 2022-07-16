#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class infinite_sorted_array
{
    public:
    int inifite_search(vector<int>& arr,int target)
    {
       ///finding range in which target exist
       int start_index=0;
       int end_index=1;
       while(arr[end_index]<target)
       {
        int tmp=end_index+1;
          end_index=end_index+(end_index-start_index+1)*2; 
          start_index=tmp;
       }
       return binarySearch(arr,target,start_index,end_index);

    }
    int binarySearch(vector<int>& arr,int target,int s, int e)
    {
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(arr[mid]==target)
            return mid;
            if(target<arr[mid])
            e=mid-1;
            else
            s=mid+1;

        }
        return -1;
    }


};
int main(){
    infinite_sorted_array obj;
    vector<int> arr={2,3,5,7,9,10,23,24,28};
    cout<<obj.inifite_search(arr,5);
}
