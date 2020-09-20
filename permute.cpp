#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void permute(string given,string s,int k){
    static int count = 0;
    if(given.size()==0){
        count++;
        if(count==k)
        cout<<s<<endl;
    }else{
        for(int i=0;i<given.size();i++){
            s.push_back(given[i]);
            auto temp = given[i];
            given.erase(std::remove(given.begin(), given.end(), temp), given.end());
            permute(given,s,k);            
            given.insert(i,1,temp);
            s.pop_back();
        }
    }
}

int main(){
    string empty;
    int n;
    cin>>n;
    string s;
    int k;
    cin>>k;
    for(int i=1;i<=n;i++){
        s = s+to_string(i);
    }
    permute(s,empty, k);
    return 0;
}