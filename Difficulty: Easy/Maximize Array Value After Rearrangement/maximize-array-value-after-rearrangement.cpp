//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Maximize(vector<int> arr) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = arr.size();
    int p = 0, ans = 0, mod = 1000000007;
    for(int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
    while(!pq.empty()) {
        ans = (ans + (long long)pq.top() * p) % mod;
        p += 1;
        pq.pop();
    }
    return ans;
}

};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends