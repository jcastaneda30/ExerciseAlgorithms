
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int solve(vector<int>& coins, int amount,vector<int>& dp) {
        if(amount<0) return INT_MAX;
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        int best=INT_MAX;
        for(int i:coins){
            int waos=solve(coins,amount-i,dp);
            if(waos!=INT_MAX) best=min(best,waos+1);
        }
        dp[amount]=best;
        return best;
    }

    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int ans=solve(coins,amount,dp);
        return (ans == INT_MAX) ? -1 : ans;
    }
};