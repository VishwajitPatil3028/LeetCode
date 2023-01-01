#User function Template for python3

class Solution:
    def printTriangle(self, n):
        # Code here
        for i in range(n):
          for j in range (i,n-1):
            print(" ",end="")
          for j in range(i+1):
            print("*", end=" ")
        
          print()
        
        for i in range(n):
            for j in range(i):
                print(" ",end="")
            for j in range(n-i):
                print("*",end=" ")
            print()

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printTriangle(N)
# } Driver Code Ends