//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;


// } Driver Code Ends

// User function Template for Java
class Solution {
    static int product(int x, int y) {
        // code here
        return x* y;
    }
}


//{ Driver Code Starts.

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String[] inp = read.readLine().split(" ");
            int x = Integer.parseInt(inp[0]);
            int y = Integer.parseInt(inp[1]);
            Solution ob = new Solution();
            System.out.println(ob.product(x, y));

            System.out.println("~");
        }
    }
}

// } Driver Code Ends