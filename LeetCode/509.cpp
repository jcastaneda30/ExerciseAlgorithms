
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> memo;
    int dp(vector<int> &memo, int a){
        if(a==0) return 0;
        if(a==1) return 1;
        if(memo[a]!=-1) return memo[a];
        memo[a]=dp(memo,a-1)+dp(memo,a-2);
        return memo[a];
    }
    int fib(int n) {
        memo.resize(n+1,-1);
        memo[0]=0;
        memo[1]=1;
        int ans=dp(memo,3);
        cout<<ans;
    }
};