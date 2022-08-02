#include<bits/stdc++.h>
using namespace std;
int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    vector<int> a;
    vector<int> b;
    for(auto x:position)
    {
        cout<<x.first<<" "<<x.first<<endl;
    }
    cout<<W<<" "<<H<<endl;
    a.push_back(0);
    b.push_back(0);
    for(auto x:position)
    {
        a.push_back(x.first);
        b.push_back(x.second);
    }
    
    //push last element for difference

    a.push_back(W+1);
    b.push_back(H+1);
    //sort both column and row vectors

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int max_x=0,max_y=0;
    for(int i=0; i<a.size()-1; i++)
    {
        max_x=max(max_x,a[i+1]-a[i]-1);
        max_y=max(max_y,b[i+1]-b[i]-1);
    }

    return max_x*max_y;

}