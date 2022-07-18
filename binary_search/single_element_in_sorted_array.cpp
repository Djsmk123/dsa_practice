#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int n=nums.size();
		int l=0, r=n-2, mid;
		while(l<=r)
		{
			mid = l + (r-l)/2;
			if(nums[mid]==nums[mid^1])   
			 l = mid+1;
			else    r = mid-1;
		}
		return nums[l];
    }
};