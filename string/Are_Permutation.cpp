#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    // your code goes here

    for(int i=0; i<A.length(); i++)
    {
        auto pos=B.find(A[i]);
        if(pos==string::npos)
        {
            return false;
        }
    }
    return true;
}