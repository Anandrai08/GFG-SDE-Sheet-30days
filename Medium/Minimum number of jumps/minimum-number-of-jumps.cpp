//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int rechfar =0;
        int jump =0;
        int curr =0;
        if(n==1){
        return 0;
        }
        for(int i=0;i<n-1;i++){
            rechfar=max(rechfar, i+arr[i]);
            
            if(rechfar<=i){
            return -1;
            }
            if(i==curr) {
            jump++;
            curr=rechfar;
        }
        }
        return jump;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends