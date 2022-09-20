#include <bits/stdc++.h>
using namespace std;
static int res=0;
bool helper(string s,string ans,unordered_set <string> dic){
    //base  case 
    if(s.length()==0)
    {   
        return true;
    }

    //rec case 

   for(int i=0; i<s.length(); i++)
   {
     string left= s.substr(0,i+1);
     if(dic.find(left)!=dic.end())
    {
        string right=s.substr(i+1);
       helper(right,ans+left+" ",dic);
    }
   }
   return false;

  
}
int wordBreak(string str, vector<string> &dictionary){
	//making unordered_set

    unordered_set<string> dic;
    for(auto x : dictionary)
    {
        if(dic.find(x)==dic.end())
        {
          dic.insert(x);
        }
      
    }
    helper(str,"",dic);
    return res;
     
} 
int main(){
    vector<string> dic={"onepieceandnaruto","onepiece","and","naruto","i","love","one","piece"};
    string str = "iloveonepieceandnaruto";
    cout<<wordBreak(str,dic);
    return 0;
}