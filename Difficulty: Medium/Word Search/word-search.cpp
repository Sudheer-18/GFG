//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool helper(vector<vector<char>>& ch, string &word, int index, int n, int m, int i, int j) {
    if (index == word.size()) return true; 
    if (i < 0 || j < 0 || i >= n || j >= m || ch[i][j] != word[index]) return false;
    char temp = ch[i][j];
    ch[i][j] = '-1'; 
    bool found = helper(ch, word, index + 1, n, m, i, j + 1) ||  
                 helper(ch, word, index + 1, n, m, i + 1, j) ||  
                 helper(ch, word, index + 1, n, m, i - 1, j) ||  
                 helper(ch, word, index + 1, n, m, i, j - 1);   
    ch[i][j] = temp; 
    return found;
}

bool isWordExist(vector<vector<char>>& mat, string& word) {
    int n = mat.size(), m = mat[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == word[0]) {
                if (helper(mat, word, 0, n, m, i, j)) return true;
            }
        }
    }
    return false;
}

};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends