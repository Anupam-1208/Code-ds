#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    int count =0;
    for(int i = 2;i<= n/2;i++){
        if(n%i == 0){
            count++; 
        }
        if(count>0)
            return false;
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        if(isprime(sqrt(a[i])))
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}