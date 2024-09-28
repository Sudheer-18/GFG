//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool slove(int s, int e, vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        map<int, int> mp;
        for(int i = s; i < s + 3; i++) {
            for(int j = e; j < e + 3; j++) {
                if(i >= n || j >= m) continue;  
                if(arr[i][j] == 0) continue;
                if(mp.find(arr[i][j]) != mp.end()) return false;
                else mp[arr[i][j]]++;
            }
        }
        return true;
    }

    int isValid(vector<vector<int>> arr) {
        map<int, int> mp;
        int n = arr.size();
        int m = arr[0].size();
        for(int i = 0; i < n; i++) {
            mp.clear();
            for(int j = 0; j < m; j++) {
                if(arr[i][j] == 0) continue;
                if(mp.find(arr[i][j]) != mp.end()) return 0;
                else mp[arr[i][j]]++;
            }
        }
        for(int i = 0; i < n; i++) {
            mp.clear();
            for(int j = 0; j < m; j++) {
                if(arr[j][i] == 0) continue;
                if(mp.find(arr[j][i]) != mp.end()) return 0;
                else mp[arr[j][i]]++;
            }
        }
        for(int i = 0; i < n; i += 3) {
            for(int j = 0; j < m; j += 3) {
                if(!slove(i, j, arr)) return 0;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends