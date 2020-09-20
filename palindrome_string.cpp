#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPalindrome(string s){
    /*string rev = s;
    reverse(rev.begin(),rev.end());
    return s == rev;*/
    int end = s.size()-1;
    int flag = 1;
    for(int i=0;i<end/2;i++){
        if(s[i] == s[end-i]){}
        else
        {
            return false;
        }
        
    }
    return true;
}
string longest(string s){
    int n = s.size();
    pair<string, int> max_s;
    int max =0;
    for(int i=0;i<n;i++){
        for(int j =i;j<n;j++){
            int len = j-i+1;
            string sub = s.substr(i,len);
            if(isPalindrome(sub)){
                if(sub.size()>max){
                    max = sub.size();
                    max_s.second = max;
                    max_s.first = sub;     
                    
                }
            }

        }
    }
    if(max_s.second){
        return max_s.first;
    }
     s = "";
    return s;
}
int main(){
    string s;
    cin>>s;
    string sub = longest(s);
    cout<<sub;
    return 0;
}
