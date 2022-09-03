#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target=nums.size()/2;
        sort(nums.begin(),nums.end());
        int ans=0;
        int cnt=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                cnt++;
            }
            else{
                cnt=0;
            }
            if(target==cnt)
            {
                ans=nums[i];
            }

        }

        return ans;


    }
};
int main(){
    vector<int> arr={2,2,1,1,1,2,2};
    cout<<Solution().majorityElement(arr);
}