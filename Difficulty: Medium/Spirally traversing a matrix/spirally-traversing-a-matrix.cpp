//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   vector<int> ans;

    void spiral_matrix(vector<vector<int>>& arr, int i, int j, int n, int m, int direction) {
        if (i < 0 || i >= n || j < 0 || j >= m || arr[i][j] == -1) return;

        ans.push_back(arr[i][j]);
        arr[i][j] = -1;

        if (direction == 0) { 
            if (j + 1 < m && arr[i][j + 1] != -1)
                spiral_matrix(arr, i, j + 1, n, m, 0);
            else
                spiral_matrix(arr, i + 1, j, n, m, 1);
        } else if (direction == 1) { 
            if (i + 1 < n && arr[i + 1][j] != -1)
                spiral_matrix(arr, i + 1, j, n, m, 1);
            else
                spiral_matrix(arr, i, j - 1, n, m, 2);
        } else if (direction == 2) {
            if (j - 1 >= 0 && arr[i][j - 1] != -1)
                spiral_matrix(arr, i, j - 1, n, m, 2);
            else
                spiral_matrix(arr, i - 1, j, n, m, 3);
        } else if (direction == 3) { 
            if (i - 1 >= 0 && arr[i - 1][j] != -1)
                spiral_matrix(arr, i - 1, j, n, m, 3);
            else
                spiral_matrix(arr, i, j + 1, n, m, 0);
        }
    }

    vector<int> spirallyTraverse(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return ans;
        int n = matrix.size();
        int m = matrix[0].size();
        spiral_matrix(matrix, 0, 0, n, m, 0);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends