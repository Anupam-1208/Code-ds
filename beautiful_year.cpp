#include<iostream>
#include<vector>
using namespace std;
bool unique(int n){
    int idx[10] = {0};
    while(n){
        int rem = n%10;
        n = n/10;
        idx[rem] += 1;
    }
    for(int i=0;i<10;i++){
        if(idx[i]>1)
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    n+=1;
    while(!unique(n)){
        n++;
    }
    cout<<n;
    
    return 0;
    
}