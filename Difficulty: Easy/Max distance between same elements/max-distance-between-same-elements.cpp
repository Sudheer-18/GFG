//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
        int maxDistance(vector<int>& arr) {
        unordered_map<int, int> first_occurrence; 
        int max_dist = 0;                        
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (first_occurrence.find(arr[i]) != first_occurrence.end()) {
                int dist = i - first_occurrence[arr[i]];
                max_dist = max(max_dist, dist);
            }
            else {
                first_occurrence[arr[i]] = i;
            }
        }
    
        return max_dist;
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

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends