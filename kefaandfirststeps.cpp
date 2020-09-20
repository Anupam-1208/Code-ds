#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    if(n == 1){
    cout<<1;
    return 0;}
    int i=0,j=1;
    int cur_len =1;
    int max = 1;
    while(j<n){
       if(v[j]>=v[j-1]){
           j++;
           cur_len++;
           if(cur_len>max)
           max = cur_len;
       }
       else{
           i=j;
           cur_len= 1;
           j++;
       }
    }
    cout<<max;
    return 0;
}