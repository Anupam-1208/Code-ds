#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
string shift(string s,int i){
    if(i>0){
    for(int j=0;j<i;j++)
        s.push_back(0);}
    else{
        for(int j=0;j<i;j++){
        
        if(s.back() == 1){
            return s;
        }
        s.pop_back();
        }

    }
    return s;
}
int bintodec(string s){
    int value=0;
    int last = s.size()-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')
        value += pow(2,last-i); 
    }
    return value;
}
int main(){
    string s;
    cin>>s;
    
    int og = bintodec(s);
    s = shift(s,2);
    int naya = bintodec(s);
    cout<<og<<" "<<naya;
    return 0;
}