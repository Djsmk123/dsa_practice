#include<bits/stdc++.h>
using namespace std;

//complexity O(N^N)
bool canPlace(int board[][20],int n,int x,int y){
    //column
    for(int k=0; k<x; k++)
    {
        if(board[k][y]==1)
        return false;
    }

    //left diag
    int i=x;
    int j=y;
    while(i>=0 && j>=0)
    {
        
        if(board[i][j]==1)
        {
             return false;
        }
       
        i--;
        j--;
    }
     //right diag
    i=x;
    j=y;
     while(i>=0 && j<n)
    {
        
        if(board[i][j]==1)

        {
            return false;
        }
        
         i--;
        j++;
    }
    return true;

}
void printBoard(int n,int board[][20]){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout <<endl;
}
int solveNQueen(int n, int board[][20],int i)
{
    //base case
    if(i==n)
    {
        //printBoard(n,board);
        return 1;
    }
    //rec case

    int ways=0;
    for(int j=0; j<n; j++)
    {
        //whether the current i,j is safe or not 
        if(canPlace(board,n,i,j))
        {
            board[i][j]=1;
            ways+=solveNQueen(n,board,i+1);
            //backtrack
            board[i][j]=0;
        }
    }
     return ways;

}

int main(){
    int board[20][20] = {0};
    int n=8;

     cout<<solveNQueen(n,board,0);
	return 0;

}   