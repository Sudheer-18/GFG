//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void findPaths(vector<vector<int>>& mat, vector<string>& ans, string path, int i, int j, int n, int m) {
        // Check if we are out of bounds or at a blocked cell
        if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] == 0) {
            return;
        }
        
        // Check if we have reached the destination
        if (i == n - 1 && j == m - 1) {
            ans.push_back(path);
            return;
        }
        
        // Mark the current cell as visited
        mat[i][j] = 0;
        
        // Move Down
        findPaths(mat, ans, path + 'D', i + 1, j, n, m);
        
        // Move Right
        findPaths(mat, ans, path + 'R', i, j + 1, n, m);
        
        // Move Left
        findPaths(mat, ans, path + 'L', i, j - 1, n, m);
        
        // Move Up
        findPaths(mat, ans, path + 'U', i - 1, j, n, m);
        
        // Backtrack: Unmark the cell
        mat[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        int n = mat.size();
        int m = mat[0].size();
        
        // Start the search from (0, 0)
        if (mat[0][0] == 1) {
            findPaths(mat, ans, "", 0, 0, n, m);
        }
        
        // Sort the result paths
        sort(ans.begin(), ans.end());
        return ans.empty() ? vector<string>{"-1"} : ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends