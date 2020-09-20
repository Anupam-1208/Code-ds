#include<bits/stdc++.h>
using namespace std;
int ar[100001];
#define size_t 100001
void seive(){
    for(int i = 2;i*i<=size_t;i++){
        if(ar[i] == 0){
            for(int j = i;j<=size_t;j+=i){
                ar[j] = -1;
            }
        }
    }
}
vector<int> prime_factor(int n){
    vector<int> res;
    if(ar[n] == -1){
        res.push_back(n);
        return res;
    }
    while(n>1){
        
    }

}
int main(){

}
