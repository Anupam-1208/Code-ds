#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int z = 0;z<t;z++){
        
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int a = n/4; int b = a+a;
        int c = a+a+a;
        if(v[a] == v[a-1] || v[b] == v[b-1] || v[c] == v[c-1]){
            cout<<-1<<"\n";
        }else{
            cout<<v[a]<<" "<<v[b]<<" "<<v[c]<<"\n";
        }


    }
    return 0;
}