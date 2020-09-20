#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int dp[target+1] = {0};
    dp[0] =1;
    for(int j  = 1;j<=n;j++){
        int cur = ar[j];
        for(int i  = target;i>=cur;i--){
            if(dp[i] || dp[i-cur] == 0)
            continue;
            else
            {
                dp[i] =1;
            }
            
        }
    }
    cout<<dp[target];
    return 0;
}