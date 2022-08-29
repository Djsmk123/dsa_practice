#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void binaryStringsHelper(string &s ,int n,int i,char last)
{
    if(n==i)
    {
        ans.push_back(s);
        return;
    }
    if(last=='1')
    {
        s.push_back('0');
        binaryStringsHelper(s, n, i+1, '0');
    }
    else{
         s.push_back('1');
        binaryStringsHelper(s, n, i+1, '1');
        s.pop_back();
          s.push_back('0');
        binaryStringsHelper(s, n, i+1, '0');
    }
     s.pop_back();
     return;
}
vector<string> binaryStrings(int n){
    // do not modify any default function or parameter you can use helper function if needed
    ans.clear();
    string s="";
    binaryStringsHelper(s,n,0,' ');
    sort(ans.begin(),ans.end());
    return ans;
    
}

/*
1 {1}

2 [ 
    {1},{2}
    {1,2}
  ]
3  



*/