#User function Template for python3

#User function Template for python3

class Solution:
    def findTwoElement( self,arr): 
        # code here
        l= []
        n = len(arr)
        total_sum = n*(n+1)//2
        repeated_no = sum(arr) - sum(set(arr))
        missed_no = total_sum - sum(set(arr))
        l.append(repeated_no)
        l.append(missed_no)
        return l
                
 
        # code here
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findTwoElement(arr)
        print(str(ans[0]) + " " + str(ans[1]))
        tc = tc - 1

# } Driver Code Ends