#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
   int findMin(vector<int>& nums) {
       int pivot=findPivot(nums);
        if(pivot==-1)
        {
            return nums[0];
        }
        cout<<pivot;
        if(nums[pivot+1]>nums[0])
            return nums[0];
        else
            return nums[pivot+1];
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
              return mid-1;
            if(nums[mid]<=nums[s])
             e=mid-1;
            else 
            s=mid+1;

        }
        return -1;
    }
};