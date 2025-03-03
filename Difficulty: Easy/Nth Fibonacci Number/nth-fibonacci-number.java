//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.nthFibonacci(n));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public int nthFibonacci(int n) {
        // code here
        int[] DP = new int[n+1];
        if(n == 0) return 0;
        DP[0] = 0;
        DP[1] = 1;
        for(int i = 2; i <= n; i++) {
            DP[i] = DP[i-1]+DP[i-2];
        }
        return DP[n];
    }
}