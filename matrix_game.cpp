#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,n;
        cin >>n>>m;
        int a[n][m];
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>a[j][k];
            }

        }
        int count =0;
        int flag =0;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                for(int c=0;c<m;c++){
                        if(a[j][c] ==1)
                              flag =1;
                     }
                 for(int r=0;r<n;r++){
                        if(a[r][j] ==1)
                            flag =1;
                }
                if(flag ==1){
                    break;
                }
                
        
         }
        if(flag==0) 
        count++;
        flag =0;
        if(flag ==1)
        continue;
        }
        if(count%2==0)
        cout<<"Vivek\n";
        else
        {
            cout<<"Ashish\n";
        }
        

    return 0;
    }
}