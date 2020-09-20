#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
    int h,p;
    cin>>h>>p;
    while(h>0 && p>0){
        h = h-p;
        p = p/2;
    }
    cout<<((h>0)?"0":"1");
    cout<<"\n";
    }
    return 0;
}