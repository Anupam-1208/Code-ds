#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int best = INT_MAX;
    vector<int> v(m);
    for(int i =0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(int i =0;i<=m-n;i++){
        best = min(best,v[i+n-1] - v[i]);
    }
    cout<<best;
return 0;
}