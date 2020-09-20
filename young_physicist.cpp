#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dir[n][3];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<3;j++){
            cin>>dir[i][j];
        }
    }
    int sum[] = {0,0,0};
        for(int j = 0;j<n;j++){
            sum[0] +=dir[j][0];
        }
        for(int j = 0;j<n;j++){
            sum[1] +=dir[j][1];
        }
        for(int j = 0;j<n;j++){
            sum[2] +=dir[j][2];
        }
        bool bolo;
        for(int i = 0;i<3;i++){
            if(sum[i]==0){
            bolo = true;}
            else
            {
                bolo = false;
                break;
            }
            
        }
        if(bolo){
        cout<<"YES";}
        else
        {
            cout<<"NO";
        }
        
return 0;

}