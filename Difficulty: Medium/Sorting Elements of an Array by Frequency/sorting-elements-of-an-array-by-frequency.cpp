//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
   vector<int> sortByFreq(vector<int>& arr) {
    int n = arr.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);

    for (auto it : mp) {
        pq.push({it.second, it.first});
    }

    vector<int> sortedArr;
    while (!pq.empty()) {
        int frequency = pq.top().first;
        int element = pq.top().second;
        pq.pop();
        
        for (int i = 0; i < frequency; i++) {
            sortedArr.push_back(element);
        }
    }

    return sortedArr;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends