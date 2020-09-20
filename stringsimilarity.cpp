#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> v;
        int j =n-1;
        int y =0;
        string sub;
        while(j<s.size()){
            sub = s.substr(y,n);
            v.push_back(sub);
            j++;y++;
        }
        string temp;
        for(int p=0;p<n;p++){
            temp.push_back('1');
        }
        for(int l =0;l<v.size();l++){
            for(int k =0;k<n;k++){
                temp[k] = char(int(v[l][k])&int(temp[k]));
            }
        }
        cout<<temp<<endl;

    }
    return 0;
}