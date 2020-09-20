#include<iostream>
using namespace std;
int main(){
    int seive[51];
    for(int i=0;i<50;i++)
    seive[i] = 1;
    seive[0] = 0;
    seive[1] = 0;
    
    for(int i = 2;i*i<= 50;i++  ){
        if(seive[i]){
            for(int itr = i*i;itr<=50;itr +=i){
            seive[itr] = 0;
            }
        }
    }
    for(int i=0;i<=50;i++){
        if(seive[i])
        cout<<i<<" ";
    }
    return 0;

}