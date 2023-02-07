//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B){
            set<int>s1;
            set<int>s2;
            string s3;
            for(int i=0; i<A.size(); i++)
            {
                s1.insert(A[i]);
            }
            for(int i=0; i<B.size(); i++)
            {
                s2.insert(B[i]);
            }
            for(auto x:s1)
            {
                if(s2.find(x)==s2.end())
                {
                    s3.push_back(x);
                }
            }
            for(auto y:s2)
            {
                if(s1.find(y)==s1.end())
                {
                    s3.push_back(y);
                }
            }
            sort(s3.begin(),s3.end());
            if(s3.size()==0)
            {
                return "-1";
            }
            return s3;
        }
};





//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends