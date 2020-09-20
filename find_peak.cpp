#include<bits/stdc++.h>
using namespace std;
int main(){
     int ar[] = {7,2,1}; // find peak or maximum value, if ar[i+1] < ar[i]  either i is peak of its on the left
     // if( ar[ i+1] > ar[ i]) then the peak is on the right
     //   
    int l = 0;
    int n = sizeof(ar)/sizeof(ar[0]);
    int r = n-1;
    int ans;
    int mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if( mid <=n-1 && ar[mid] > ar[mid+1] ){
            r = mid-1;
            ans = mid;
        }else{
            l = mid+1;
        }
    }
    cout<<ar[mid];
    return 0;
}