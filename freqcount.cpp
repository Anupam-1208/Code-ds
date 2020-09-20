#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256 
int getMaxOccuring(vector<int> lev) 
{ 
    int count[10] = {0}; 
  
    
    int len = lev.size(); 
    int max = 0;  // Initialize max count 
    int result;   // Initialize result 
    for (int i = 0; i < len; i++) { 
        count[lev[i]]++; 
        if (max < count[lev[i]]) { 
            max = count[lev[i]]; 
            result = lev[i]; 
        } 
    } 
  
    return result; 
} 

void subsequences(vector<int> s){
    int n = s.size();
    unordered_map<int,int> res;
    for(int i = 1;i<(1<<n);i++){
        vector<int> lev;
        for(int j=0;j<n;j++){
            if((1<<j) & i){
                lev.push_back(s[j]);
            }
        }
        for(auto a:lev)
        cout<<a<<" ";
        cout<<" - ";
        cout<<getMaxOccuring(lev)<<" ";
        cout<<endl;
      //  res[getMaxOccuring(lev)]++;
    }
   /* for(auto x:res){
        auto itr = find(s.begin(),s.end(),x.first);
        cout<<x.first<<"-"<<x.second<<endl;
    }*/
}
int main(){
    vector<int> sub(3);
    for(int i = 0;i<3;i++){
        cin>>sub[i];
    }
    subsequences(sub);
    return 0;
}