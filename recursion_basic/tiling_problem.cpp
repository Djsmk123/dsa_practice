#include<bits/stdc++.h>
using namespace std; 

int resTile(int n ,int m)
{
    //base case
    if(n==m)
    return 2;
    if(n<m or n==1)
    return 1;
    return resTile(n-1,m)+resTile(n-m,m);
}
int tillingProblem(int n, int m){
        int ways = resTile(n, m);
    return ways;
}

int main(){
    cout<<tillingProblem(4,3);

    return 0;
}