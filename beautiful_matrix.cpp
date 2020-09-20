#include<iostream>
using namespace std;
int mod(int n){
    if(n<0)
    return -n;
    return n;
}
int main(){
    int a[5][5];
    int r,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                 r = i;
                 c = j;
            }
        }
    }
 
    int step = mod(r-2)+mod(c-2);
    cout<<step;
    return 0;

    
}