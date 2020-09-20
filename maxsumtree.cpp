#include<bits/stdc++.h>
using namespace std;
const int N = 3e5, M = N;
vector<int> g[N];
int dp[N];
void dfs(int cur,int par){
    cout<<cur<<" ";
    for(int v:g[cur]){
        if(v == cur){
            continue;
        }
        dfs(v,cur);
    }
}
int main(){
    int n; // no. of edges
    cin>>n;
    int u,v;
    for(int i =0;i<n-1;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,0);
    
}
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int x_array[] = {0,0,+1,-1};
        int y_array[] = {+1,-1,0,0};
        queue<int> row;
        queue<int> col;
        int ones = 0;
        int r = grid.size();
        int c = grid[0].size();
        int t= 0;
        queue<pair<int,int>> q;
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(grid[i][j] == 2){
                    row.push(i);
                    col.push(j);
                }
                else{
                    if(grid[i][j] == 1)
                        ones++;
                }
            }
        }
        while(!row.empty()){
            q.push({row.front(),col.front()});
            row.pop();
            col.pop();
        }
        //now we have the location of all the rotten oranges
        while(!q.empty()){
            int temp =q.size();
            for(int i=0;i<temp;i++){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i =0;i<4;i++){
                    int temp_x = x+x_array[i];
                    int temp_y = y+y_array[i];
                    if(temp_x<0 || temp_x>r)
                        continue;
                    if(temp_y<0 || temp_y>c)
                        continue;
                    if(grid[temp_x][temp_y] == 2 || grid[temp_x][temp_y] == 0)
                        continue;
                    grid[temp_x][temp_y] = 2;
                    ones--;
                    q.push({temp_x,temp_y});
                }
            }
            if(!q.empty())
                t++;
        }
        if(ones>0)
            return -1;
        return t;
        
    }
};