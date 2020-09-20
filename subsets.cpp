#include<bits/stdc++.h>
using namespace std;
bool iszero(vector<int> v){
    int sum = 0;
    for(int i = 0;i<v.size();i++)
    sum+=v[i];
    if(sum == 0)
    return true;
    return false;
}
void print_subset(vector<int> v,int n){
    int loop = pow(2,n);
    for(int i =1;i<loop;i++){
        vector<int> level;
        for(int j =0 ;j<n;j++){
            if((1<<j) & i){
                level.push_back(v[j]);
            }
        }
        if(iszero(level)){
        cout<<"YES"<<endl;
        return;}
    }
    cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
    vector<int> v;
    int temp;
    for(int i = 0;i<4;i++){
    cin>>temp;
    v.push_back(temp);}
    print_subset(v,4);
    t--;
    }
}