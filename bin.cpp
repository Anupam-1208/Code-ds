#include<bits/stdc++.h>
using namespace std;

int value(string s){
        long long sum = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '1'){
                sum+=pow(2,i);
            }
        }
        return sum;
    }
 string to_String(long long num){
        string s;
        while(num>0){
            if(num%2 == 1)
                s.push_back('1');
            else
                s.push_back('0');
            num = num/2;   
        }
        reverse(s.begin(),s.end());
        return s;
    }
 string addBinary(string a, string b) {
        long long value_a = value(a);
        long long value_b = value(b);
        long long sum = value_a+value_b;
        string s = to_String(sum);
        return s;
        
    }
int main(){
    string s = "11";
    string b = "1";
}