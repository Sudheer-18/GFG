// User function template for C++
class Solution {
  public:
       int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int i=0;
        int j=arr[0].size()-1;
        int res=-1;
        while(i>=0 && i<arr.size() && j>=0){
            if(arr[i][j]==1){
                res=i;
                j--;
            }
            else{
                i++;
            }
        }
        return res;
    }
};