#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &mat,int i,int j,int no){


	//Check for row and col
	for(int k=0;k<9;k++){
		if(mat[k][j]==no||mat[i][k]==no){
			return false;
		}
	}
	//check for subgrid

	int sx = (i/3)*3;
	int sy = (j/3)*3;

	for(int x=sx; x<sx + 3;x++){
		for(int y =sy;y<sy + 3;y++){
			if(mat[x][y]==no){
				return false;
			}
		}
	}
	return true;
}
void printArray(vector<vector<int>> & mat){
       for(auto x: mat)
       {
         for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
 bool SolveSoduko(vector<vector<int>> & mat,int i,int j, int n)
 {
    //base case
    if(i==n)
    {
        printArray(mat);
        return true;
    }


    //rec case

    if(j==n)
    {
        return SolveSoduko(mat,i+1,0,n);

    }

    //skip the prefilled cell
    if(mat[i][j]!=0)
    return SolveSoduko(mat,i,j+1,n);
    // cell to be filled 

    for(int x=1; x<=n; x++)
    {
        if(isSafe(mat,i,j,x))
        {
            mat[i][j]=x;
            bool solveProblem=SolveSoduko(mat,i,j+1,n);
            if(solveProblem==true)
            return true;
        }
    }
    // if no option works,backtrack

    mat[i][j]=0;
    return false;
 }

 int main(){
    vector<vector<int>> mat={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};
    if(!SolveSoduko(mat,0,0,9)){
        	cout<<"No solution exists!";
        }
  
 }