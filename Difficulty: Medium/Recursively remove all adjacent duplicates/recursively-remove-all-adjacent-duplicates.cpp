//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string rremove(string s) {
            string res="";
            int i=0;
            while(i<s.length()) {
                if(i+1<s.length() && s[i]==s[i+1]) {
                    i++;
                    while(i<s.length() && s[i] == s[i-1]) {
                        i++;
                    }
                }
                else {
                    res += s[i];
                    i++;
                }
            }
            if(res.length() == s.length()) return res;
            return rremove(res);
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends