//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& arr) {
        // Code here
        int cnt=0;
        int n = arr.size();
        int m = arr[0].size();
       for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                 if(arr[i][j]==0){
                    if(i-1>=0&&arr[i-1][j]==1){
                    cnt++;
                }
                if(j-1>=0&&arr[i][j-1]==1){
                    cnt++;
                }
                if(i+1<n&&arr[i+1][j]==1){
                    cnt++;
                }
                if(j+1<m&&arr[i][j+1]==1){
                    cnt++;
                    }
                 }
            }
        }
        return cnt; 
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends