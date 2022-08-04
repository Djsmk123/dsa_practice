
/*    

Sample Input

    { {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} }


Sample Output

    { {5, 0, 3, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {9, 0, 3, 0} }
*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
 int n = arr.size();
	vector<pair<int,int>> zeroIndex ;
 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n;j++){
			if(arr[i][j] == 0){
				zeroIndex.push_back({i,j});
			}
		}
	}
	int x = zeroIndex.size();
		for(int i = 0 ; i< x; i++){
		int row = zeroIndex[i].first;
		int col = zeroIndex[i].second ;
		for(int j = 0 ;  j < n ; j++){
             arr[row][j] = 0;
			 arr[j][col] = 0;
	}
	
	}
	return arr;
    
}