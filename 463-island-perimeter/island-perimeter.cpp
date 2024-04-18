class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int per = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for(int i =0 ;i<rows ; i++)
        {
            for(int j =0 ; j<cols ; j++)
            {
                if(grid[i][j]==1)
                {
                    per+=4;
                    if(i>0 && grid[i-1][j]==1)
                    {
                        per-=2;
                    }
                    if(j>0 && grid[i][j-1]==1)
                    {
                        per-=2;
                    }
                }
            }
        }

        return per;
        
    }
};