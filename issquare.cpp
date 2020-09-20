#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i*i<=n){
        if(i*i == n)
        cout<<"is square";
        i++;
    }
    return 0;
}