//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
    // boolean ans = True ;
   int n = str.size() ;
   for(int i = 0 ; i < n  ; i++) {
   if(str[i] != '1' &&  str[i] != '0'){
       return 0 ;
   }
   
   }
   return 1;
}