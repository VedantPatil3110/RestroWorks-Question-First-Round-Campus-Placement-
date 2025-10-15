#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&coins,int amount,vector<int>&dp){
    if(amount==0){
        return 0;
    }
    if(amount<0){
        return INT_MAX;
    }
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int ans=INT_MAX;
    for(int i=0;i<coins.size();i++){
        ans=min(ans,1+solve(coins,amount-coins[i],dp));
    }
    return dp[amount]=ans;
}
int main(){
    int amount;
    cin>>amount;
    int n;
    cin>>n;
    vector<int>coins;
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<int>dp(amount+1,-1);
    int ans=solve(coins,amount,dp);
    cout<<ans;

}