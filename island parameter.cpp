//You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.
//Grid cells are connected horizontally/vertically (not diagonally). 
//The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
//The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
// One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
     int peri=0;
        int m=grid.size();
        int n=grid[0].size();
        if(m==0){
            return 0;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    continue;
                }
                peri+=4;
                if(i>0){
                    peri-=grid[i-1][j];
                }
                if(j>0){
                    peri-=grid[i][j-1];
                }
                if(i<m-1){
                    peri-=grid[i+1][j];
                }
                 if(j<n-1){
                    peri-=grid[i][j+1];
                }
            }
        }
        return peri;
    }
};
