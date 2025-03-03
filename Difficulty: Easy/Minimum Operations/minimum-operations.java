//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.minOperation(n));
                
System.out.println("~");
}
        }
}    
// } Driver Code Ends


//User function Template for Java


class Solution {
    public int minOperation(int n) {
        int DP[] = new int[n + 1];
        DP[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) 
                DP[i] = Math.min(DP[i / 2], DP[i - 1]) + 1;
            else  
                DP[i] = DP[i - 1] + 1;
        }
        return DP[n];
    }
}
