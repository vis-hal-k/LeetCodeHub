#User function Template for python3

class Solution:
    def minIteration(self, N, M, x, y):
        return max(y-1,M-y)+max(x-1,N-x)
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N, M = map(int,input().split())
		x, y = map(int,input().split())
		ob = Solution()
		print(ob.minIteration(N, M, x, y))
# } Driver Code Ends