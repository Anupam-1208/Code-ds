#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> > a( n , vector<int> (n));  
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j != 0 || j != i ){
                a[i][j] = a[i-1][j]+a[i-1][j-1];
                continue;
            }
            a[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<int> row(5,1);
    for(int i=0;i<5;i++)
    cout<<row[i];
    return 0;
}