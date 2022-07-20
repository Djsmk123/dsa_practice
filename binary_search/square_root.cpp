#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    #define ll long long
    int mySqrt(int x) {
    
        int start=0;
        if(x==0)
        {
            return 0;
        }
        int end=max(1,x/2);
        int ans=0;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            ll square=1ll*mid*mid;
            if(square<=x)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
           

        }
        return ans;
    }
};