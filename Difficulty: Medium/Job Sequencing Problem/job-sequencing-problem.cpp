//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job  
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
bool static cmp2(const Job j1, const Job j2) {
    return j1.dead < j2.dead; // Earliest deadline first
}

class Solution {
public:
    vector<int> JobScheduling(Job arr[], int n) {
        sort(arr, arr + n, cmp2);
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; ++i) {
            if (pq.size() < arr[i].dead) {
                pq.push(arr[i].profit);
            } 
            else if (pq.size() == arr[i].dead) {
                if (!pq.empty() && pq.top() < arr[i].profit) {
                    pq.pop();
                    pq.push(arr[i].profit);
                }
            }
        }
        int profit = 0;
        int days = pq.size();
        while (!pq.empty()) {
            profit += pq.top();
            pq.pop();
        }

        return {days, profit};
    }
};


//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends