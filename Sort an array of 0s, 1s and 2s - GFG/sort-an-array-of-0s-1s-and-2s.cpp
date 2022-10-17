//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int ze=0 ;
        int one=0 ;
        int two=0 ;
        for(int i=0 ; i<n; i++){
            if(a[i]==0)
                ze++ ;
            else if(a[i]==1)
                one++ ;
            else if(a[i]==2)
                two++ ;
        }
        for(int i=0 ; i<n ; i++ ) {
               if(ze!=0){
                   a[i] = 0 ;
                   ze-- ;
                   continue ;
               }
               else if(one !=0 ){
                   a[i] =1 ;
                    one-- ;
                    continue ;
               }
               else if(two != 0) {
                   a[i]=2 ;
                   two-- ;
                   continue ;
               }
               cout<<a[i]<<" " ;
        }
        
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends