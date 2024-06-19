//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // code here
        double z1 = (perimeter + sqrt(pow(perimeter,2)-24*area)) / 12;
        double z2 = (perimeter - sqrt(pow(perimeter,2)-24*area)) / 12;
        double v1 = ((perimeter*pow(z1,2))/4)-(2*pow(z1,3));
        double v2 = ((perimeter*pow(z2,2))/4)-(2*pow(z2,3));
        if(v1>v2){
            return v1;
        }
        else{
            return v2;
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        double perimeter, area;
        cin >> perimeter >> area;
        // if (area == 5 and parameter == 15) {
        //     cout << "0.46" << endl;
        //     return 0;
        // }
        Solution ob;
        double ans = ob.maxVolume(perimeter, area);
        cout.precision(2);
        cout << fixed << ans << "\n";
    }
}
// } Driver Code Ends