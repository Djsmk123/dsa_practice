#include<bits/stdc++.h>
using namespace std;
int main(){
    string routes;
    cin>>routes;
    int x=0,y=0;
    for(auto x:routes)
    {
        switch(x){
            case 'N': y++;
                       break;
            case 'S': y--;
                    break;
            case 'E': x++;
                      break;
            case 'W':x--;
                    break;        
        }
    }

    if(x>=0 && y>=0)
    {
        while(y--)
        {
            cout<<"N";
        }
        while(x--)
        {
            cout<<"E";
        }
    }
    else if(x<=0 && y>=0)
    {
        while(y--)
        {
            cout<<"N";
        }
        while(x--)
        {
            cout<<"W";
        }
    }
    else if(x<=0 && y<=0)
    {
         while(y++)
        {
            cout<<"S";
        }
        while(x++)
        {
            cout<<"W";
        }
    }
    else{
         while(y--)
        {
            cout<<"S";
        }
        while(x--)
        {
            cout<<"E";
        }
    }

}