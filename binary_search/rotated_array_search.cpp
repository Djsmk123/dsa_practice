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