//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
public:
    long long size = 1e6 + 1;
    vector<bool> Primes;
    Solution() {
        Primes.resize(size, true);
        Seive();
    }
    void Seive() {
        Primes[0] = false;
        Primes[1] = false;
        for(long long i = 2; i * i < size; i++) {
            if(Primes[i]) {
                for(long long j = i * i; j < size; j += i) {
                    Primes[j] = false;
                }
            }
        }
    }
    string isSumOfTwo(int N) {
        for(long long i = 2; i <= N / 2; i++) {
            if(Primes[i] && Primes[N - i]) 
                return "Yes";
        }
        return "No";
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends