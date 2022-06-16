#include<bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>>& grid) {
   int rows = grid.size();
   int cols = grid[0].size();
   int valu_matrix[rows][cols];
   valu_matrix[0][0] = grid[0][0];

   for(int i =1 ; i < rows ; ++i){
      valu_matrix[i][0] = valu_matrix[i-1][0] + grid[i][0]; // filled 0 column with new value
   }
   for(int i =1 ; i < cols ; ++i){
      valu_matrix[0][i] = valu_matrix[0][i-1] + grid[0][i]; // filled 0 row with new value
   }

   //now we will fill the in between cell(i,j) form the minimum of(it uppur cell([i][j-1]) and left cell([i-1,j][j]))
   for(int i =1 ; i < rows ; ++i){
      for(int j =1 ; j < cols ; ++j){
         valu_matrix[i][j] = grid[i][j] + min(valu_matrix[i-1][j],valu_matrix[i][j-1]);
      }
   }
   //we have fill all the cell with minimum value
   //now will return the most right_bottom cell
   return valu_matrix[rows-1][cols-1];
}

int main(){
   vector<vector<int> > grid{ { 1, 3, 1 }, 
                           { 1, 5, 1 }, 
                           { 4, 2, 1 } }; 
   cout << minPathSum(grid);
}