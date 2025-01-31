//{ Driver Code Starts
//Initial Template for Java

//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            String[] S = br.readLine().trim().split(" ");
            int[] arr = new int[n];
            for(int i = 0; i < n; i++){
                arr[i] = Integer.parseInt(S[i]);
            }
            Solution obj = new Solution();
            int ans = obj.countSumSubsets(arr, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    public int ans = 0;
    public void helper(int[] arr ,int n,int idx,int sum) {
        if(idx >= n) {
            if(sum !=0 && sum % 2 == 0) ans++;
            return ;
        }
        helper(arr,n,idx + 1,sum+arr[idx]);
        helper(arr,n,idx + 1,sum);
    }
    public int countSumSubsets(int[] arr, int N) {
        // Code here
        helper(arr,N, 0, 0);
        return ans;
    }
}