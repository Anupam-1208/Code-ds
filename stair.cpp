#include <iostream>
#include<vector>
using namespace std;
long long int dp[1000001] = {0};
long long int stair(int n){
    if(n == 1 || n == 2|| n == 3){
        return dp[n];
    }else{
        if(dp[n] == 0){

      dp[n]= (stair(n-1)+stair(n-2)+stair(n-3))%100000007;  
      }
      return dp[n];
    }
}
int main() {
	// your code goes here
	int n;
	    cin>>n;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
	    cout<<	stair(n)<<endl;
	return 0;
}