#include<bits/stdc++.h>
using namespace std;

bool subset_sum(vector<int> list,int target){
    int n = list.size();
    for(int i =1;i<=2<<n;i++){
        int sum = 0;
        for(int j = 0;j<n;j++){
            if((i>>j) & 1)
            sum += list[j];
        }
        if(sum == target)
        return true;
    }
    return false;
}
int main(){
    vector<int> list{1,2,7};
    int target = 10;
    cout<<subset_sum(list,target);
    return 0;
}