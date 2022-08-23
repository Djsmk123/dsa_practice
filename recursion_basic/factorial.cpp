#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{  
    return n==0?1:n*fac(n-1);
}
int main(){
    int n=5;
    cout<<fac(n);
}