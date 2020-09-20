#include<bits/stdc++.h>
using namespace std;
bool football(string s,int size){
    if(size<7)
    return false;
    string sub;
    bool cur = false;
    for(int i=0;i<=size-7;i++){
        sub = s.substr(i,7);
        int num = int(sub[0]);
        for(int j=1;j<7;j++){
            if(num == sub[j])
            cur = true;
            else
            {
             cur = false;
             break;
            }
            
        }
        if(cur)
        return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    cout<<((football(s,n)) ? "YES" : "NO");
    return 0;
}