#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
    
    int size = s.size();
    for(int i=0;i<size;i++){
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.size()==0){
                return 0;
            }
            char top = st.top();
            if(s[i] == ')' && top != '('){
                return 0;
            }
            
            if(s[i]== ']' && top != '['){
                return 0;
            }
            
            if(s[i] == '}' && top !='{'){
                return 0;
            }
            st.pop();
        }
    }
    
    if(st.size() != 0){
        return 0;
    }
    
    return 1;
    }
};