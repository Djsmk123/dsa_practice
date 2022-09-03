#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int search(vector<int> &nums,int target)
    {
        int pivot = findPivot(nums);

       
        if (pivot == -1) {
          
            return binarySearch(nums, target, 0 , nums.size() - 1);
        }

       
        if (nums[pivot] == target) {
            return pivot;
        }

        if (target >= nums[0]) {
            return binarySearch(nums, target, 0, pivot - 1);
        }

        return binarySearch(nums, target, pivot + 1, nums.size() - 1);

       
    }
    int binarySearch(vector<int> & nums,int t,int s,int e)
    {
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            cout<<mid<<endl;
            if(nums[mid]==t)
            return mid;
            if(t>nums[mid])
            s=mid+1;
            else
            e=mid-1;
        }
        return -1;
    }
    int findPivot(vector<int>& nums)
    {
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(mid<e && nums[mid]>nums[mid+1])
            return mid;
            if(mid>s && nums[mid]<nums[mid-1])
            return mid;
            if(nums[mid]<=nums[s])
             e=mid-1;
            else 
            s=mid+1;

        }
        return -1;
    }

};


/* using recursion 

#include <bits/stdc++.h>
using namespace std;
// helper method
int searchHelper(vector<int> &v,int s,int e,int x)
{
    if(s>e)
     return -1;
     int mid=s+(e-s)/2;

     if(v[mid]==x)
      return mid;
      if(v[mid]>x)
      return searchHelper(v,s,mid-1,x);
       else
      return searchHelper(v,mid+1,e,x);
}
int findPivot(vector<int> &v,int s,int e){
    if(s>=e)
    return -1;
    int mid=s+(e-2)/2;
    if(mid<e && v[mid]>v[mid+1] || (mid>s &&v[mid]<v[mid-1]))
    return mid;
    if(v[mid]<=v[s])
    return findPivot(v,s,mid-1);
    else 
    return findPivot(v,mid+1,e);
    
}

int binarySearch(vector<int> v, int x)
{
    int s=0;
    int e=v.size()-1;
    int p=findPivot(v,s,e);
    if(p==-1)
    return searchHelper(v,s,e,x);
    if(v[p]==x)
    return p;
      if (x >= v[0]) {
            return searchHelper(v, s, p- 1,x);
        }

        return searchHelper(v, p+1, e,x);
    
}


int main(){
    vector<int> arr={10,22,28,29,30,40};
    cout<<binarySearch(arr,29);
    
}*/