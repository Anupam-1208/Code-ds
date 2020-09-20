#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k =0;k<t;k++){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int j =0;j<n;j++){
            cin>>v[j];
        }
        //1 2 3 4 7 8 9
        int i =0,j=1;
        int max = 2;
        int cur_len = 2;
        int cur_dif= v[j]-v[j-1]; //j = 1 and  i=0
        j++;
        while(j<n){
            if(v[j]-v[j-1] == cur_dif){
                j++;cur_len++;
            }else{
                i = j-1;
                cur_dif = v[j]-v[i];
                cur_len =2;
                j++;
            }
            if(cur_len>max)
            max = cur_len;
            
        }
        cout<<"Case #"<<k+1<<"  "<<max<<endl;
    }
    return 0;
}