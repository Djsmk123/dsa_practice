#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int target=n/3;
        vector<int> arr;
        map<int,int> freq;
        for(auto x:nums)
        {
        if(freq.find(x) == freq.end()) {
            freq[x] = 1;
        }
        else {
            freq[x]++;
        }

        }

        for(auto x: freq)
        {
        
            if(x.second>target)
            {
                arr.push_back(x.first);
            }
        }
        return arr;
    }
};
int main(){
    vector<int> arr={3,2,3};
    vector<int> newarr=Solution().majorityElement(arr);
    for(auto x: newarr)
    {
        cout<<x<<" ";
    }
}