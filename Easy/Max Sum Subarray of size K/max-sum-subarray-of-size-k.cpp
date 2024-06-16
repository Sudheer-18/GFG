//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        long long current_sum = 0;
    for(int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    
    // Initialize maximum sum as the sum of the first window
    long long max_sum = current_sum;
    
    // Slide the window over the array
    for(int i = k; i < n; i++) {
        // Update the sum by removing the element going out of the window
        // and adding the new element coming into the window
        current_sum += arr[i] - arr[i - k];
        
        // Update maximum sum if the current window's sum is greater
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    return max_sum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends