#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here

    string output;
    for(auto x:s)
    {
        auto it=output.find(x);
        if(it==string::npos)
        {
            output.push_back(x);
        }
    }
    //sort
    sort(output.begin(),output.end());
    return output;

    
}
int main(){
    cout<<removeDuplicate("codingminutes");
}