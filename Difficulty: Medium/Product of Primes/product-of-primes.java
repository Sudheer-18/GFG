//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String a[] = in.readLine().trim().split("\\s+");
            long L = Long.parseLong(a[0]);
            long R = Long.parseLong(a[1]);
            
            Solution ob = new Solution();
            System.out.println(ob.primeProduct(L, R));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    static long primeProduct(long L, long R){
        // code here
        long ans = 1;
        long mod = 1000000007;
        for(long i = L;i<=R;i++) {
            if(is_prime(i)) ans = (ans*i)%mod;
        }
        return ans%mod;
    }
    static boolean is_prime(long n){
        if(n<=1) return false;
        if(n==2) return true;
        for(long i=2;i< Math.sqrt(n)+1;i++) {
            if(n%i==0) return false;
        }
        return true;
    }
}