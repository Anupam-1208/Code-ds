#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i= 0;i<t;i++){
        int a;//stick
        int b;//sword
        cin>> a>>b;
        int up;
        int count =0;
        if(b<a/2){
        cout<<b<<endl;
        continue;}
        if(a<b/2){
            cout<<a<<endl;
            continue;
        }
        count =a;
        while((a>1 && b>0) || (a>0 && b>1)){
            if(a>b){
                a-=2;
                b-=1;
            }
            else{
                b-=2;
                a-=1;
            }
            count++;
            
        }
        cout<<count<<endl;;

    }
    return 0;
}