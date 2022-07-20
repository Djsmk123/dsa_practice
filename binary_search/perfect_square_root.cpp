class Solution {
public:
     #define ll long long
    bool isPerfectSquare(int num) {
         int start=0;
        if(num==0)
        {
            return 0;
        }
        if(num==1)
        {
            return 1;
        }
        int end=max(1,num/2);
     
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            ll square=1ll*mid*mid;
            if(square==num)
            {
                return true;
            }
            if(square<num)
            {
               start=mid+1;
            }
            else
            {
                
                 end=mid-1;
            }

        }
        return false;
    }
    
};