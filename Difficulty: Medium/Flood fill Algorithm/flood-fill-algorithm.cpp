class Solution {
public:
    void DFS(int r, int c, vector<vector<int>>& image, int newColor, int iniColor,
             int dr[], int dc[], vector<vector<int>>& ans) {
        ans[r][c] = newColor;
        int n = image.size();
        int m = image[0].size();

        for (int i = 0; i < 4; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                image[nr][nc] == iniColor && ans[nr][nc] != newColor) {
                DFS(nr, nc, image, newColor, iniColor, dr, dc, ans);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int iniColor = image[sr][sc];
        if (iniColor == newColor) return image;  // prevent infinite loop
        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        vector<vector<int>> ans = image;
        DFS(sr, sc, image, newColor, iniColor, dr, dc, ans);
        return ans;
    }
};

