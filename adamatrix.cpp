#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int z = 0;z<t;z++){
        
        int n;
        cin>>n;
        int res = 0;
        vector<vector<int>> v;
        int temp;
        for(int i = 0;i<n;i++){
            vector<int> level;
            for(int j=0;j<n;j++){
                cin>>temp;
                level.push_back(temp);
            }
            v.push_back(move(level));

         }
        for(int k = n-1;k>0;k--){
            if(v[0][k] != k+1){
                res++;
                for(int i = 0;i<=k;i++){
                    for(int j = i+1;j<=k;j++){
                        v[i][j] = v[i][j] + v[j][i];
                        v[j][i] = v[i][j] - v[j][i];
                        v[i][j] = v[i][j] - v[j][i];
                    }

                }
            }
        }
        cout<<res<<endl;

    }
    return 0;
}