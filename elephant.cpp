#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int res;
    if(x%5 == 0)
    res = x/5;
    else
    res = x/5 +1;
    cout<<res;
    /*int dp[x+1] = {0};
    for(int i =1;i<=5;i++){
        dp[i] = 1;
    }
    int min;
    for(int  i =6;i<=x;i++){
        int min = dp[i-1];
        for(int j =2;j<=5;j++){
            if(min>dp[i-j])
            min = dp[i-j];
        }
        dp[i] = min+1;
    }
    cout<<dp[x];*/
    return 0;
}
