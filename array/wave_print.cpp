#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    int start_col=m-1;
    int end_row=n-1;
    int start_row=0;
    bool upToDown=true;
    vector<int> ans;
    while(start_col!=-1)
    {
        //end col
        if(upToDown)
        {
            for(int row=start_row; row<=end_row; row++)
                ans.push_back(arr[row][start_col]);
                
               
                
        }
        else{
            for(int row=end_row; row>=start_row; row--)
            ans.push_back(arr[row][start_col]);   
        }
         start_col--;
        upToDown=!upToDown;



    }
    return ans;
}
int main(){
    vector<vector<int>> arr={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    WavePrint(4,4,arr);
}
