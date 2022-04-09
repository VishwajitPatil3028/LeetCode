// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        map<int,int>m;
        int ps = 0;
        int answer = 0 ;
        m[ps] = -1;
        
        for(int i = 0 ; i<n ;i++){
            ps += A[i];
            
            if(m.find(ps)!= m.end()){
                answer = max(answer,i - m[ps]);
            }
            else{
                m[ps] = i;
            }
        }
        
        return answer;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends