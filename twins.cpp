#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int temp;
    int total_sum = 0;
    for(int i = 0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
        total_sum += temp;
    }
    //sort the values and traverse until you get strictly greater than than the rest of the values
    sort(v.begin(),v.end());
    int no = v.size();
    int rem = total_sum;
    int cur = 0;
    for(int i = no-1;i>=0;i--){
        cur+=v[i];
        rem = total_sum - cur;
        if(cur>rem){
        cout<<n-i;break;}
    }

    return 0;

}