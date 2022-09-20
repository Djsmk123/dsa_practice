#include<bits/stdc++.h>
using namespace std;


void helper(vector<vector<int>>&path , vector<vector<int>>&ans , vector<string> arr , int n , int m , int  i , int j){
    //base case 
    if(i==n-1 & j==m-1)
    {
          path[i][j] = 1;
          //adding all the values from path to ans
          for(int k = 0 ; k<n ; k++){

            for(int u = 0 ; u< m ; u++){
                ans[k][u] = path[k][u];
            }

        }
        return;
    }

    //rec case 

    //down 
    if(i!=n-1 && arr[i+1][j]=='O' and path[i+1][j]!=1)
    {
        path[i+1][j]=1;
        helper(path,ans,arr,n,m,i+1,j);
        path[i+1][j]=0;
    }

      //right

    if(j!= m-1 and arr[i][j+1] == 'O' and path[i][j+1] != 1){

        path[i][j+1] = 1;

        helper(path , ans , arr, n , m , i , j+1);

        path[i][j+1] = 0;

    }

   

    //up

    if(i!= n-1 and arr[i+1][j] == 'O' and path[i+1][j] != 1){

        path[i+1][j] = 1;

        helper(path , ans , arr, n , m , i+1 , j);

        path[i+1][j] = 0;

    }

   

    //left

    if(i!= 0 and arr[i-1][j] == 'O' and path[i-1][j] != 1){

        path[i-1][j] = 1;

        helper(path , ans , arr, n , m , i-1 , j);

        path[i-1][j] = 0;

    }
    return;



}
vector<vector<int>> ratAndMice(vector<string> arr) {
     // get number of columns

      int m = arr[0].length();
      //get number of rows
      int n = arr.size();
       // create a 2d matrix of m*n with all default value zero
       vector<vector<int>> path;

      vector<int> zero(m , 0);
      for(int i=0 ; i<n ; i++){
         path.push_back(zero);
    }
    vector<vector<int>> ans(n , vector<int>(m,0));
    path[0][0]=1;

    helper(path , ans , arr , n , m , 0 , 0);
    return ans;

    
}