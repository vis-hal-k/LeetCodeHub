//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
      #define mod 1000000007;
    long long f(int n , vector<long long> &dp ){
        // if(n==0) return 1 ; 
        if(n==1) return 1 ; 
        if(n==2) return 2 ;
        if(n==3) return 4 ;
        if(dp[n]!=-1) return dp[n] ;
        dp[n] = (f(n-1 , dp) + f(n-2 , dp ) + f(n-3 , dp))%mod ;
        return dp[n] ;
    }
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        vector<long long> dp(n+1 , -1) ;
        return f(n , dp) ;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends