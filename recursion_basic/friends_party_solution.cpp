#include <bits/stdc++.h>
using namespace std;


int friendsPairing(int n){
     if(n==1 || n==0)
    return 1;
    if(n==2)
    return 2;
    int ans=friendsPairing(n-1)+(n-1)*friendsPairing(n-2);
    return ans;
}