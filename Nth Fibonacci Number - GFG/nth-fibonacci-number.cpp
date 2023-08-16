//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    #define mod 1000000007;
    int f(int n , vector<int>&dp) {
        if(n <= 1)  return n ;
        if(dp[n]!=-1) return dp[n] ;
        dp[n] = (f(n-1,dp) + f(n-2,dp))%mod; 
        return dp[n];
    }
    int  nthFibonacci(int n){
        // code here
         vector <int> dp(n+1 , -1) ;
         return f(n , dp ) ;
              
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends