//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    
    long long maxSum(vector<int>& arr) {
        long long ans = 0;
        int n = arr.size();
        int i = 0, j = n - 1;
        sort(arr.begin(), arr.end());
        vector<int> nums;
        nums.reserve(n);
        while (i <= j) {
            nums.push_back(arr[i++]);
            if (i <= j) nums.push_back(arr[j--]);
        }
    
        for (i = 0; i < n - 1; i++) {
            ans += abs(nums[i] - nums[i + 1]);
        }
        ans += abs(nums.back() - nums.front()); // Connect last and first
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends