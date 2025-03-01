//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
    int n = arr.size();
    unordered_map<int, int> mp;
    int maxi = 0;
    int pre = 0;

    for(int i = 0; i < n; i++) {
        pre += arr[i];

        if(pre == k) {
            maxi = max(maxi, i + 1);
        }
        else {
            if(mp.find(pre - k) != mp.end()) {
                maxi = max(maxi, i - mp[pre - k]);
            }
        }
        if(mp.find(pre) == mp.end()) {
            mp[pre] = i;
        }
    }
    return maxi;
}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends