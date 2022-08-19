#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&(n-1))==0)
    {
        cout<<n<<" is a power of 2"<<endl;
    }
    else{
         cout<<n<<" not is a power of 2"<<endl;
    }
}