#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int count =0;
    int i = v.size()-1;
    while(v[i] == 4){
        count++;
        v.pop_back();
        i--;
    }
    int count3 = 0;
    while(v[i] == 3){
        count3++;
        v.pop_back();
        i--;
    }
    int count1 = 0;
    i = 0;
    while(v[i] == 1){
        count1++;
        i++;
    }
    if(count3>=count1){
        count+=count3;
        count1 =0;
    }
    else{
        count+=count3;
        count1 -=count3;
    }
    //remaining 1s and 2s 
    int count2 = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] == 2)
        count2++;
    }
    int rem =0;
    int sum = 2*count2 + count1;
    rem = sum%4;
    sum /=4;
    if(rem!=0)
    sum++;
    count += sum;
    cout<<count;
    return 0;
   
    
}