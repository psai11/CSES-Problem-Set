#include <bits/stdc++.h>
 
using namespace std;
const int mod = 1e9+7;
 


int solve(vector<int> coins, int n, int x){
    if(n==0) return 0;
    if(n<0) return -1;
    int now=0;
    for(auto c:coins) {
        now = max(solve(coins, n, x-c)+1,now);
    }
    return now;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,x;
    cin>>n>>x;

    vector<int> coins(n);
    for(int i=0;i<n;i++) {
        cin>>coins[i];
    }

    cout<<solve(coins, n, x);

    return 0;
}