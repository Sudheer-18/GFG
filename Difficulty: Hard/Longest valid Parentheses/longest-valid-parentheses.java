//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while (t-- > 0) {
            String S = in.readLine();

            Solution ob = new Solution();
            System.out.println(ob.maxLength(S));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends



class Solution {
    static int maxLength(String s) {
        // code here
        Stack<Integer> st  = new Stack<>();
        st.push(-1);
        int maxLen = 0;
        for(int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if(ch == '(') st.push(i);
            else {
                st.pop();
                if(st.isEmpty()) st.push(i);
                maxLen = Math.max(maxLen,i - st.peek());
            }
        }
        
        return maxLen;
    }
}