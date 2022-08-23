#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        int n=0,m=0;
        for(char x :num1){
            n+=x-'0';
        }
        for(char x : num2){
            m+=x-'0';
        }
        int mul=n*m;
        string ans="";
        while(mul>0)
        {
            ans+=mul%10;
            mul/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(){
    cout<<Solution().multiply("2","3");
}