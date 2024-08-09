//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k) {
    int max_val = 0;
    int pre_sum = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        pre_sum += arr[i];
        int rem = ((pre_sum % k) + k) % k; 
        if (rem == 0) {
            max_val = i + 1;
        }
        else if (mp.find(rem) != mp.end()) {
            max_val = max(max_val, i - mp[rem]);
        }
        else {
            mp[rem] = i;
        }
    }

    return max_val;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends