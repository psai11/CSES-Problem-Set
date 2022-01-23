#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<int>> board {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
};

bool safe(int x, int y, int n) {
    // cout<<"yo ";
    if(board[x][y]==-1) return false;

    for(int row=0; row<x; row++) {
        if(board[row][y]==1) return false;
    }
    // cout<<"yo1 ";
    int row = x;
    int col = y;
    while(row>=0 && col>=0) {
        if(board[row][col]==1) return false;
        row--; col--;
    }
    // cout<<"yo2 ";
    row = x;
    col = y;
    while(row>=0 && col<n) {
        // cout<<"% "<<row<<" "<<col;
        if(board[row][col]==1) return false;
        row--; col++;
    }
    // cout<<"yo3 ";
    return true;
}

int ans = 0;

void solve(int x, int n){
    int col = 0,temp;
    while(col<n) {
        temp=board[x][col];
        // cout<<"#\n";
        if(safe(x, col, n)) {
            // cout<<x<<" "<<col<<" here\n";
            board[x][col] = 1;
            if(x==n-1) ans++;
            else solve(x+1, n);
        }
        board[x][col] =temp;
        col++;
    }
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string line;
    int n=8;
    for (int i=0; i<n; i++)
    {
        cin>>line;
        for(int j=0; j<n; j++) {
            if(line[j]=='*') board[i][j]=-1;
        }
        
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<board[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    solve(0,n);

    cout<<ans;

    return 0;
}