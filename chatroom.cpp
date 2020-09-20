#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()<5){
    cout<<"NO";
    return 0;}
    string h = "hello";
    int i = 0;
    int j = 0;
    string ans;
    while(j<s.size()){
        if(h[i] == s[j]){
            ans.push_back(s[j]);
            i++;
        }
        j++;
    }
    if(ans == h)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    return 0;

}