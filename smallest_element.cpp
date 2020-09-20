#include<bits/stdc++.h>
using namespace std;
int main(){
     int ar[] = {3,5,6,7,1,2}; // we have a rotated array a sorted array, we have to find the smallest element
    int l = 0;
    int n = sizeof(ar)/sizeof(ar[0]);
    int r = n-1;
    int ans = -1;
    int mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ar[mid] <= ar[n-1]){
            r = mid -1;
            ans = ar[mid];
        }else{
            l = mid+1;
        }
    }
    cout<<ans;
}