#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int size=s.length()-1;
        //skip whitespace
        while (isspace(s[size])){
                 size--;
            }
        while(size--)
        {
            if(isalpha(s[size]))
            {
                ans++;
                size--;
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};