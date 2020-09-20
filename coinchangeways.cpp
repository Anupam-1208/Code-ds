#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    cin>>sum;
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0)); // create a dp matrix to store the ways 
    for(int i =0;i<=n;i++){
        dp[i][0] =1;   //beacause no. of ways to create sum 0 is 1  i.e to not select any element
    }
    for(int i = 1;i<=n;i++){ // the no. of elements to be chosen to calculate the ways
        for(int j =1;j<=sum;j++){
            int idx = j - v[i-1];     // calculating index to calculate ways
            if(idx<0){
                dp[i][j] = dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i][idx] + dp[i-1][j];
            }

        }
    }
    cout<<dp[n][sum];

    return 0;
}