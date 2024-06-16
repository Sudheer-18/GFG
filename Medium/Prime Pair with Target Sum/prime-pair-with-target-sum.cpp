//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    bool isprime(int n) {
        if(n == 1) return false;
        if(n == 2) return true;  // 2 is the only even prime number
        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

    vector<int> getPrimes(int n) {
        vector<int> ans;
        for(int i = 2; i <= n / 2; i++) { // Start from 2, not 1
            int mid = n - i;
            if(isprime(i) && isprime(mid)) {
                ans.push_back(i);
                ans.push_back(mid);
                return ans; // Return immediately after finding the first pair
            }
        }
        if(ans.size() == 0) {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends