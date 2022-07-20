#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto x:matrix)
        {
            int tmpIndex=binarySearch(x,target,0,x.size()-1);
           if(tmpIndex!=-1)   
           {
            return true;
           }
        }
        return false;
    }
    int binarySearch(vector<int> & nums,int t,int s,int e)
    {
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            cout<<mid<<endl;
            if(nums[mid]==t)
            return true;
            if(t>nums[mid])
            s=mid+1;
            else
            e=mid-1;
        }
        return -1;
    }
};