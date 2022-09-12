#include<bits/stdc++.h>
using namespace std;
//complexity O(2^N)
int gridWays(int i,int j,int m,int n){
    //base case
    if(i==m-1 && j==n-1)
    {
        return 1;
    }
    if(j>=n or i>=m)
    {
        return 0;
    }

    //rec case

    int ans=gridWays(i+1,j,m,n)+gridWays(i,j+1,m,n);
    return ans;


}

int main(){
   int n=3,m=3;
   cout<<gridWays(0,0,m,n);
}