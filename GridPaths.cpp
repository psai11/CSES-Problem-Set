#include <bits/stdc++.h>
 
using namespace std;
 
vector<vector<int>> grid {
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0}
};
int pathlen = 0;
int ans = 0;
char quer;
string query;

void solve(int x, int y, int n){
    // cout<<pathlen<<"->";
    if(x>=0 && x<n && y>=0 && y<n && grid[x][y]==0) {
        // cout<<"here";
        if(x==n-1 && y==0 && pathlen==n*n-1) {
            ans++;
            // cout<<" *"<<ans<<"#"<<x<<":"<<y<<"* ";
        }

        else {
            // cout<<x<<":"<<y<<" ";
            grid[x][y] = 1;
            quer = query[pathlen];
            pathlen++;
            if(quer!='?') {
                switch(quer) {
                    case 'U':
                        solve(x-1, y, n);
                        break;
                    case 'D':
                        solve(x+1, y, n);
                        break;
                    case 'L':
                        solve(x, y-1, n);
                        break;
                    case 'R':
                        solve(x, y+1, n);
                        break;
                }
            }
            else {
                solve(x-1, y, n);
                solve(x+1, y, n);
                solve(x, y-1, n);
                solve(x, y+1, n); 
            }
            grid[x][y] = 0;  
            pathlen--; 
        }
    }
}
 
int main()
{
    // cout<<"hello";
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout<<"hello here";
    int n = 7;
    cin>>query;

    // cout<<"hello";
    solve(0,0,n);
    
    cout<<ans;
    return 0;
}