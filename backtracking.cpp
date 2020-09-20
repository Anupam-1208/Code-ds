#include<iostream>
using namespace std;
pair<int,int> find(int m[9][9]){
    pair<int,int> pos;
    for(int i = 0;i<9;i++){
        for(int j=0;j<9;j++){
            if(m[i][j]==0)
            pos.first = i;
            pos.second = j;
            return pos;
        }
    }
    pos.first = -1;
    pos.second = -1;
    return pos;
}
bool valid(int val,int i,int j, int m[9][9]){
    for(int x = 0;x<9;x++){
        if(val == m[x][j] && x!=i)
        return false;
    }
    for(int y=0;y<9;j++){
        if(val == m[y][i] )
        return false;
    }
    int box_x = i/3;
    int box_y = i/3;
    for(int x= box_x;x<box_x+3;x++){
        for(int y = box_y;y<box_y+3;y++){
            if(val == m[x][y] && x!=i && y!= j)
            return false;
            return true;
        }
    }
    
    
}
void printGrid(int grid[9][9]) 
{ 
    for (int row = 0; row < 9; row++) { 
        for (int col = 0; col < 9; col++) 
            cout << grid[row][col] << " "; 
        cout << endl; 
    } 
} 
bool solve(int m[9][9]){
    pair<int,int> pos;
    pos = find(m);
    if(pos.first == -1){
        printGrid(m);
        return true;
        
    }
    else{
        for(int i =1;i<=9;i++){
            if(valid(i,pos.first,pos.second,m)){
                m[pos.first][pos.second] = i;
                if(solve(m))
                     return true;
                m[pos.first][pos.second] = 0;
            }
        }
    }
    return false;

}
int main(){
    int m[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>m[i][j];
        }
    }
    if(solve(m)!=true)
    cout<<"no";
    return 0;
    
}