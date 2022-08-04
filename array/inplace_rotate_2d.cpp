#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
      // your code goes here
      reverse(matrix.begin(),matrix.end());
      for(auto x:matrix)
    {
        for(auto y:x)
        cout<<y<<" ";
        cout<<endl;
    }
      // transpose the reverse matrix
      int r=matrix.size();
      for(int i=0; i<r; i++)
      {
        for(int j=0; j<r; j++)
        swap(matrix[i][j],matrix[j][i]);
      }
}

int main(){
    vector<vector<int>> matrix={{1,2,3},      
    {4,5,6},
    {7,8,9}
    };
    rotate(matrix);
    for(auto x:matrix)
    {
        for(auto y:x)
        cout<<y<<" ";
        cout<<endl;
    }
}