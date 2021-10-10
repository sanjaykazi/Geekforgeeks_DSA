 bool isSafe(int i, int j,vector<vector<int>>& grid){
        if(i >= 0 and i < grid.size() and j >= 0 and j < grid[0].size()){
            return true;
        }
        return false;
    }
    bool isPath(int i, int j,vector<vector<int>>& grid, vector<vector<bool>> &visited){
        if(isSafe(i,j,grid) and grid[i][j] != 0 and !visited[i][j]){
            visited[i][j] = true;
            if(grid[i][j] == 2) return true;
            //up
            bool up = isPath(i-1,j,grid,visited);
            if(up){
                return true;
            }
            // left
            bool left = isPath(i,j-1,grid,visited);
            if(left){
                return true;
            }
            //down
            bool down = isPath(i+1,j,grid,visited);
            if(down){
                return true;
            }
            //right
            bool right = isPath(i,j+1,grid,visited);
            if(right){
                return true;
            }
        }
        return false;
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid.size(),false));
        int x, y;
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1 and !visited[i][j]){
                    if(isPath(i,j,grid,visited)){
                        return true;
                        break;
                    }
                }
            }
        }
        return false;
    }
