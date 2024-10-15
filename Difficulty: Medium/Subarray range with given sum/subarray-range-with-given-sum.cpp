//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
   int subArraySum(vector<int>& arr, int tar) {
    int n = arr.size();
    int ans = 0;
    map<int, int> mp;
    int sum = 0;
    
    // Iterate over the array
    for (int num : arr) {
        sum += num;
        if (sum == tar) {
            ans++;
        }
        if (mp.find(sum - tar) != mp.end()) {
            ans += mp[sum - tar];
        }
        mp[sum]++;
    }
    
    return ans;
}

};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int tar = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, tar);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends