#include<iostream>
#include<vector>
#include<string>
using namespace std;
void sublist(vector<string>& list,vector<string>& chosen){
    if(list.size()==0){
        for(int i=0;i<chosen.size();i++){
            cout<<chosen[i];
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<list.size();i++){
            chosen.push_back(list.front());
            list[0] = {""};
            sublist(list,chosen);
            chosen.pop_back();
        }
    }
}
int main(){
    vector<string> list;
    list.push_back("jane");
    list.push_back("rane");
    list.push_back("pane");
    vector<string> chosen;
    sublist(list,chosen);
    return 0;
}