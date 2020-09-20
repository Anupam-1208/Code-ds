#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int temp;
        int min = -1;
        int min_ans;
        for(int i =0;i<n;i++){
            cin>>temp;
            if(min == -1 && k%temp == 0){
                min = k/temp;
                min_ans = temp;  
            }else{
                if(k%temp == 0 && min>k/temp){
                    min = k/temp;
                    min_ans = temp;
                }
            }
        }
        if(min == -1)
        cout<<"-1"<<endl;
        else
        cout<<min_ans<<endl;
    }
    return 0;
}