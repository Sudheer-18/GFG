//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    long long size = 1e6 + 1;
    vector<bool> Primes;

    Solution() {
        Primes.resize(size, true);
        Seive();
    }

    void Seive() {
        Primes[0] = Primes[1] = false;
        for (long long i = 2; i * i <= size; i++) {
            if (Primes[i]) {
                for (long long j = i * i; j < size; j += i) {
                    Primes[j] = false;
                }
            }
        }
    }

    int minNumber(int arr[], int N) {
        int sum = 0;
        for (int i = 0; i < N; i++) sum += arr[i];

        if (Primes[sum]) return 0;

        for (int i = sum + 1; i < size; i++) {
            if (Primes[i]) return i - sum;
        }

        return 0;  
    }
};





//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends