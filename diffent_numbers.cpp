#include<bits/stdc++.h>
using namespace std;
bitset<1000000001> visited;
int main(){
    int a[] = {2,4,3,2,6};
    //different numbers are numbers which do not occur twice;
    //doing this using bitset;
    int n = 5;
    int count = 0;
    for(int i = 0;i<n;i++){
     int x = a[i];
     if(!visited[x]){
         count++;
         visited[x] = true;
     }
    }
    cout<<count;
    return 0;
    
}