#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    
   int count=0;

    sort(length.begin(),length.end());

    if(length.empty() || length.size()==1)

    return count;

    else{

    for(int i=0;i<length.size();i++){

        if(abs(length[i]-length[i+1])<=D){

        count++;

        i++;

        }

    }

    }

    return count;
    
}