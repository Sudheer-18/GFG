class Solution {
private:
    bool valid(int i, int j, int n, int m) {
        return i >= 0 && j >= 0 && i < n && j < m;
    }

public:
    int orangesRotting(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int FO = 0, minutes = -1;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<int, int>> Q;
        int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 2) {
                    Q.push({i, j});
                    vis[i][j] = true;
                }
                if (mat[i][j] == 1) {
                    FO++;
                }
            }
        }
        while (!Q.empty()) {
            int sz = Q.size();
            minutes++;
            while (sz--) {
                int r = Q.front().first;
                int c = Q.front().second;
                Q.pop();

                for (int i = 0; i < 4; i++) {
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    if (valid(nr, nc, n, m) && !vis[nr][nc] && mat[nr][nc] == 1) {
                        vis[nr][nc] = true;
                        mat[nr][nc] = 2;
                        Q.push({nr, nc});
                        FO--;
                    }
                }
            }
        }

        if (FO > 0) return -1;
        return max(0, minutes);
    }
};
