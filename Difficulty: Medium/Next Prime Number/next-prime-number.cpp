//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++


bool isPrime(int n) {
    if( n <= 1) return false;
    if(n == 2) return true;
    for(int i = 2; i < n ; i++) {
        if(n % i == 0) return false;
    }
    
    return true;
}

int nextPrime(int n){
      
        
    //code here to find next prime number
    //return next prime number
   while(!isPrime(++n)) {
       int c= 0;
   }  
   return n;
    
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = nextPrime(n);
        cout<<ans<<endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends