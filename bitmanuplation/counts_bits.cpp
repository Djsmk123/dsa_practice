#include<bits/stdc++.h>
using namespace std;
int count_bits(int n){
    int count=0;
    while(n>0){
        int last_bit=n&1;
        count+=last_bit;
        n=n>>1;
    }
    return count;
}
int count_bits_hack(int n){
    int cnt=0;

    while(n>0){
        n=n&(n-1);
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<count_bits(n)<<endl;  
}