#include<bits/stdc++.h>
using namespace std;

//prefix sum
int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    // your code goes here
        int sum = 0;
     while(sc <= ec) {
    for(int row = sr; row <= er; row++) {
      sum += v[row][sc];
    }
    sc++;
  }   
  return sum;   
}