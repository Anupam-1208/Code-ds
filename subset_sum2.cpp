#include<bits/stdc++.h>
using namespace std;
void print_subsetsum(int *ar,int target){
    int n = sizeof(ar)/sizeof(ar[0]);
    int dp[target+1] = {0};
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        int cur = ar[i];
        for(int j =target;j>=cur;j--){
            if(dp[j] || dp[j - cur] == 0){
                continue;
            }
            else{
                dp[j] = cur;
            }
        }
    }
    for(int i =0;i<=target;i++)
    cout<<dp[i]<<" ";
}
int main(){
    int ar[] = {2,5,3,4};
    int target = 12;
    print_subsetsum(ar,target);
    return 0;
}