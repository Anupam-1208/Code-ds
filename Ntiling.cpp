#include<bits/stdc++.h>
using namespace std;
int dp[10000001] = {0};
int ways(int n,int &count){
    if(n == 1)
    return 1;
    if
    if(n<0)
    return 0;
    else{

        return ways(n-1,count)+ways(n-2,count);
    }
}
int main(){
    int n;
    cin>>n;
    int count =0;
    count =ways(n,count);
    cout<<count;
    return 0;
}