#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        bool sign=true;
        string num="";
        long ans=0;
        int i=0;
        //Skip Wihte Spaces
            while (isspace(s[i])){
                 i++;
            }

        if(s[i] == '-') {
           sign = false;
           i++;
       }
      else if(s[i] == '+'){
          i++;
        }
       for(; i<s.length(); i++){
        if(isdigit(s[i])){
            ans = (ans *10) + (s[i] - '0');
            if(ans > INT_MAX && sign)
                return 2147483647;
            else if (ans > INT_MAX && !sign)
                return -2147483648;
        }
        else if(!isdigit(s[i])){
            break;
        }
    }
    if(sign)
        return (int)ans;
    return (int)-1*ans;
    }
};
int main(){
    Solution s;
    cout<<s.myAtoi("42");
}
