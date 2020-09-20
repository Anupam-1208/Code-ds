#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        unordered_set<int> s;
        int temp;
        int has_zero = 0;
        for(int j = 0;j<n;j++){
            cin>>temp;
            if(temp == 0)
            has_zero = 1;
            s.insert(temp);
        } 
        if(has_zero == 1)
        cout<<s.size()-1<<endl;
        else{
        cout<<s.size()<<endl;
        }
    }

    return 0;

}
