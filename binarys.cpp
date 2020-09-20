#include<bits/stdc++.h>
using namespace std;
int main(){
    //find the first element greater than equal to x
    //using binary search
    // m = l + (r-l)/2;
    int ar[] = {3}; // here the answer is 4 ,since 4 is the first element >= 3;
    int x = 3;
    int l = 0;
    int n = sizeof(ar)/sizeof(ar[0]);
    int r = n-1;int mid;
    int ans = -1;
    while(l<=r){
        mid = l + (r-l)/2;
        if(ar[mid] >= x){ // if mid of the array is greater than or equal to the req. number 
            r = mid-1;  // then we see if there is any element in the left part of mid
            ans = mid;
        }
        else{               // else means that the element on the mid is smaller than the required number so we will se the right
           l = mid+1;   // side of mid
        }

    }
    if(ans<0)
    return 0;
    cout<<ar[ans];
    return 0;
    
}