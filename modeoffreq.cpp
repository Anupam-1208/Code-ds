#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        vector<int> freq(11,0);
        int n;
        cin>>n;
        int temp;
        for(int j =0;j<n;j++){
            cin>>temp;
            freq[temp] += 1;
        }
        map<int,int> freqmode;
        for(int j =1;j<11;j++){
            if(freq[j]>0)
            freqmode[freq[j]]++;
        }
        int maxi;
        int ans;
        for(auto x:freqmode){
        int maxi = x.second;
        int ans = x.first;
        break;}
         //5 9 2 9 7 2 5 3
        for(auto x:freqmode){
            if(x.second>maxi){
                 maxi = x.second;
                ans  = x.first;
             }
        }
        cout<<ans<<endl;

    }
    return 0;
}