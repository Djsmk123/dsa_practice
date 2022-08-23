#include<bits/stdc++.h>
using namespace std;

int power(int a,int n){
 if(n==0)
 return 1;
 return a*power(a,n-1);
}
    



    //fast approach
    int fastPower(int a,int n)

    {
        if(n==0)
        return 1;
        int subProb=fastPower(a,n/2);
        int subProbSeq=subProb*subProb;
        if(n&1)
        return a*subProbSeq;
        return subProbSeq;
    }
int main(){
    cout<<power(5,3);
}
