//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
    unordered_map<int, int> mp;
    int pre_sum = 0;
    int cnt = 0;
    mp[0] = 1;

    for (int i = 0; i < arr.size(); i++) {
        pre_sum += arr[i];
        if (mp.find(pre_sum - k) != mp.end()) {
            cnt += mp[pre_sum - k];
        }
        mp[pre_sum]++;
    }

    return cnt;
}

};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends