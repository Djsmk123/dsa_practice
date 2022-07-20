#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        //maxmium sum possible in array is sum of all the element
        int end=accumulate(nums.begin(), nums.end(), 0);
        //minimum sum possible in array is Max Element
        int start = *max_element(nums.begin(), nums.end()); 
        //using Binary Search
        while(start<end)
        {
            int mid=start+(end-start)/2;
            //calculate no of pieces we can divide
            int sum=0;
            int pieces=1;
            for(int num:nums)
            {
                if(sum+num>mid)
                {
                    sum=num;
                    pieces++;
                }
                else{
                    sum+=num;
                }

            }

            if(pieces>m)
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        return end;

    }
};