#include<bits/stdc++.h>
using namespace std;
// we are going to match all the values of
int subset(vector<int> v,vector<int> weight,int w){
    int n = v.size();
    int max_value = 0;
    int cur_weight = 0;
    int cur_val = 0;
    for(int i = 1;i<(1<<n);i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cur_weight+=weight[j];
                cur_val +=v[j];
            }
        }
        if(cur_weight<=w){
            max_value = max(max_value,cur_val);
        }
    }
    return max_value;
}
int main(){
    vector<int> list{100,220,70};
    vector<int> weight{10,20,50};
    int w = 50;
    cout<<subset(list,weight,w);
    return 0;
}