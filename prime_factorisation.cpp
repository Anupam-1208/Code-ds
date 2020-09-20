#include<bits/stdc++.h>
using namespace std;
int nums[100001] = {-1};
#define size_t 100000
void seive(){
    memset(nums,-1,size_t);
    nums[0] = 0;
    nums[1] =1;
    for(int i =2;i<=size_t;i++){
        if(nums[i] == -1){
            for(int j=i;j<=size_t;j += i){
                if(nums[j] == -1)
                nums[j] = i;
            }
        }
    }
}
vector<int> prime_factor(int n){
    
    vector<int> prime;
    if(n == 0)
    return prime;
    int temp = 0;
    while(temp != 1){
         temp = nums[n];
         prime.push_back(temp);
         n = n/temp;
    }
    return prime;
}
int main(){
    seive();
    int n;
    cin>>n;
    vector<int> prime;
    prime = prime_factor(n);
    for(int i =0;i<prime.size();i++){
        cout<<prime[i]<<" ";
    }
    return 0;
}