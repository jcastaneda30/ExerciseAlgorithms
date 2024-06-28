//{ Driver Code Starts
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void theSameShit(vector<int> &arr,vector<int> &ans,int index,int suma){
        if(index==arr.size()){
            ans.push_back(suma);
            return;
        }
        theSameShit(arr,ans,index+1,suma+arr[index]);
        theSameShit(arr,ans,index+1,suma);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        theSameShit(arr,ans,0,0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends