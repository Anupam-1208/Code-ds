#include<bits/stdc++.h>
using namespace std;
int mins(int a,int b){
    if(a>b)
    return b;
    else
    return a;
}
void coinChange(vector<int> nums,int amount,int &res,int cur){
    if(amount == 0){
        res = mins(res,cur);
        return;
    }
    if(amount < 0)
    return ;
    for( int c: nums){
        coinChange(nums,amount -c,res,cur+1);
    }
}
int coinChange(vector<int> coins, int amount){
    vector<int> dp(amount+1,INT_MAX);
    dp[0] = 0;
    int ans;
    for(int i =1;i<=amount;i++){
        for(int coin:coins){
            if(coin<=i)
            ans = min(dp[i],1+dp[i-coin]);
            if(ans == INT_MAX)
            dp[i] = INT_MAX;
            else
            {
                dp[i] = ans;
            }
            
        }
    }
    if(dp[amount] == INT_MAX)
    return -1;

    return dp[amount];

}
int main(){
    vector<int> nums{1,5};
    int temp;
    
    int amount = 10;
    //cin>>amount;
    int res = INT_MAX; // infinity
     coinChange(nums,amount,res,0);
     cout<<coinChange(nums,amount)<<endl;

    cout<<res;
    return 0;
}