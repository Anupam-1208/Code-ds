#include<bits/stdc++.h>
using namespace std;
// 0 -A
// 1 -B
// 2 -C
// 3 -D
const int mod = 1e9 + 7;
const int N= 1e7+2;
int dp[4][N];
int vis[4][N];
int ways(int cur,int des,int steps){
    if(steps == 0){
        if(cur == des){
            return 1;
        }
        return 0;
    }
        int ans = dp[cur][steps];
        if(vis[cur][steps])
        return ans;
        vis[cur][steps] = 1;
        ans =0;
        for(int i=0;i<4;i++){
            if(cur == i)
            continue;
            ans +=ways(i,des,steps-1);
            if(ans>=mod)
                ans -=mod;
        }
        dp[cur][steps] = ans;
        return dp[cur][steps];
}
int main(){
    int n;
    cin>>n;
    int count =0;
    count =ways(3,3,n);
    cout<<count;
    return 0;
}