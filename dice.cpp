#include<iostream>
#include<vector.
using namespace std;
void diceSumhelper(int dice, int sum, vector<int> &v){
    if(dice == 0){

    }else if(!((dice-1)*6<sum)){
        for(int i=1;i<=6;i++){
            v.push_back(i);
            diceSumhelper(dice-1,sum-i,v);
            v.pop_back();
        }
    }
}