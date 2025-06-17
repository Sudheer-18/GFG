
class Solution {
  public:
    // Function to find whether a path exists from the source to destination.
    bool DFS(vector<vector<int>>& grid,vector<vector<bool>>& vis,int n,int m,int i,int j) {
        if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] == 0) return false;
        if(grid[i][j] == 2) return true;
        vis[i][j] = true;
        if(DFS(grid,vis,n,m,i,j+1)) return true;
        if (DFS(grid,vis,n,m,i+1,j)) return true;
         if(DFS(grid,vis,n,m,i,j-1)) return true;
         if (DFS(grid,vis,n,m,i-1,j)) return true;
        return false;
    }
    
    bool is_Possible(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        pair<int,int> SP;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1) {
                    SP = {i,j};
                    break;
                }
            }
        }
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        return DFS(grid,vis,n,m,SP.first,SP.second);
    }
};