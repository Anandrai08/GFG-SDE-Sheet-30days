//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M){
      int Max=-1;
            int ans=-1;
            int cnt=0;
            for(int i=N-1;i>=0;i--){
                cnt=0;
                for(int j=M-1;j>=0;j--){
                    if(Mat[i][j]==1){
                        cnt++;
                    }
                }
                Max=max(Max,cnt);
                if(Max==cnt){
                  ans=i;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends