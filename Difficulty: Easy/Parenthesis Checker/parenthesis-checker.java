//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class Driverclass {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        // Reading total number of testcases
        int t = sc.nextInt();

        while (t-- > 0) {
            // reading the string
            String st = sc.next();

            // calling ispar method of Paranthesis class
            // and printing "balanced" if it returns true
            // else printing "not balanced"
            if (new Solution().isBalanced(st) == true)
                System.out.println("true");
            else
                System.out.println("false");

            System.out.println("~");
        }
    }
}
// } Driver Code Ends



class Solution {
    static boolean isBalanced(String str)
    {
        // add your code here
        Stack<Character> s = new Stack<>();
        int n = str.length();
        
        for(int i=0; i<n; i++){
            char ch = str.charAt(i);
            
            if(ch == '(' || ch == '{' || ch == '['){
                s.push(ch);
            }
            else{
                if(s.isEmpty()){
                    return false;
                }
                if( (s.peek() == '(' && ch == ')') 
                    || (s.peek() == '{' && ch == '}')
                    || (s.peek() == '[' && ch == ']') ){
                        s.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(s.isEmpty()) {
            return true;
        }
        
        return false;
    }
}
