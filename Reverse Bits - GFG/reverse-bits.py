#User function Template for python3

class Solution:
    
    
    def reversedBits(self, X):
        a =bin(X).replace("0b", "") 
        # print(type(a))
        l = len(a)
        s = '0' * (32-l) + a
        
        s = s[::-1]
        g =int(s,2)
        return g 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        X=int(input())
        
        ob = Solution()
        print(ob.reversedBits(X))
# } Driver Code Ends