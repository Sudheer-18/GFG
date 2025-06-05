class Solution {
  private:
    void DFS(vector<vector<char>>& grid,int i,int j,int n,int m,
    vector<vector<bool>>& vis) {
        if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] 
        || grid[i][j] == 'W')  return;
        vis[i][j] = true;
        DFS(grid,i-1,j,n,m,vis);
        DFS(grid,i,j-1,n,m,vis);
        DFS(grid,i+1,j,n,m,vis);
        DFS(grid,i,j+1,n,m,vis);
        DFS(grid,i-1,j-1,n,m,vis);
        DFS(grid,i+1,j-1,n,m,vis);
        DFS(grid,i-1,j+1,n,m,vis);
        DFS(grid,i+1,j+1,n,m,vis);
        
    }
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0; i<n;i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 'L' && !vis[i][j]) {
                    DFS(grid,i,j,n,m,vis);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};