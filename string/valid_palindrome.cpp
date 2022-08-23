#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ")
            return true;
        string newstr="";
        for(auto x:s){
            if(isalnum(x)){
                if(	isalpha(x)){
                    newstr+=tolower(x);
                }
                else{
                    newstr+=x;
                }
            }
        }
        return isPalindromeSub(newstr);

    }
bool isPalindromeSub(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return false;
        }
    }
    // Return "Yes"
    return true;
}
};